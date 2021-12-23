/*
 * Copyright (C) 2021 Will Tesler. All rights reserved.
 */
#include <cassert>
#include <reshade.hpp>

struct __declspec(uuid("0D7525F9-C4E1-426E-CD99-15BBD5FD51F2")) user_data
{
    reshade::api::resource host_resource = { 0 };
    uint32_t textureWidth = -1;
    uint32_t textureHeight = -1;
};

/**
 * Create our CPU-accessible texture
 */
static void on_init(reshade::api::swapchain *swapchain) {
    auto &data = swapchain->create_private_data<user_data>();

    reshade::api::device *const device = swapchain->get_device();

    // Get description of the back buffer resource.
    reshade::api::resource_desc desc = device->get_resource_desc(swapchain->get_current_back_buffer());
    desc.type = reshade::api::resource_type::texture_2d;
    desc.heap = reshade::api::memory_heap::gpu_to_cpu;
    desc.usage = reshade::api::resource_usage::copy_dest;

    // Store the dimensions of the texture.
    data.textureWidth = desc.texture.width;
    data.textureHeight = desc.texture.height;

    // Expect only this texture format.
    assert(desc.texture.format == reshade::api::format::r8g8b8a8_unorm);

    // Create a CPU-accessible texture that matches the back buffer.
    bool success = device->create_resource(desc, nullptr, reshade::api::resource_usage::cpu_access, &data.host_resource);
    if (success) {
        reshade::log_message(3, "Created CPU Texture Buffer.");
    } else {
        reshade::log_message(1, "Failed to create CPU Texture Buffer.");
    }
}

/**
 * Cleanup resources
 */
static void on_destroy(reshade::api::swapchain *swapchain) {
    auto &data = swapchain->get_private_data<user_data>();

    if (data.host_resource != 0) {
        swapchain->get_device()->destroy_resource(data.host_resource);
    }

    swapchain->destroy_private_data<user_data>();
}

static void on_reshade_finish_effects(reshade::api::effect_runtime *runtime, reshade::api::command_list *, reshade::api::resource_view rtv, reshade::api::resource_view) {
    auto &data = runtime->get_private_data<user_data>();

    reshade::api::device *const device = runtime->get_device();

    const reshade::api::resource rtv_resource = device->get_resource_from_view(rtv);

    // Copy texture to our accessible CPU Texture. These are the main operations of the whole file!
    reshade::api::command_list *const cmd_list = runtime->get_command_queue()->get_immediate_command_list();
    cmd_list->barrier(data.host_resource, reshade::api::resource_usage::cpu_access, reshade::api::resource_usage::copy_dest);
    cmd_list->barrier(rtv_resource, reshade::api::resource_usage::render_target, reshade::api::resource_usage::copy_source);
    cmd_list->copy_resource(rtv_resource, data.host_resource);
    cmd_list->barrier(data.host_resource, reshade::api::resource_usage::copy_dest, reshade::api::resource_usage::cpu_access);
    cmd_list->barrier(rtv_resource, reshade::api::resource_usage::copy_source, reshade::api::resource_usage::render_target);

    runtime->get_command_queue()->flush_immediate_command_list();

    reshade::api::subresource_data host_data;
    bool didMapTextureRegion = device->map_texture_region(
            data.host_resource,
            0,
            nullptr,
            reshade::api::map_access::read_only,
            &host_data);

    if (!didMapTextureRegion) {
        reshade::log_message(1, "Failed to map texture region.");
        return;
    }

    for (int y = 0; y < data.textureHeight; ++y) {
        for (int x = 0; x < data.textureWidth; ++x)
        {
            const size_t host_data_index = y * host_data.row_pitch + x * 4;

            const uint8_t r = static_cast<const uint8_t *>(host_data.data)[host_data_index + 0];
            const uint8_t g = static_cast<const uint8_t *>(host_data.data)[host_data_index + 1];
            const uint8_t b = static_cast<const uint8_t *>(host_data.data)[host_data_index + 2];
            // const uint8_t a = static_cast<const uint8_t *>(host_data.data)[host_data_index + 3];

            // DO SOMETHING WITH THE PIXEL DATA HERE.
            // COPY PIXEL DATA TO INTERPROCESS SHARED MEMORY.
        }
    }

    device->unmap_texture_region(data.host_resource, 0);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID) {
    switch (fdwReason) {
        case DLL_PROCESS_ATTACH:
            if (!reshade::register_addon(hinstDLL))
                return FALSE;
            reshade::register_event<reshade::addon_event::init_swapchain>(on_init);
            reshade::register_event<reshade::addon_event::destroy_swapchain>(on_destroy);
            reshade::register_event<reshade::addon_event::reshade_finish_effects>(on_reshade_finish_effects);
            break;
        case DLL_PROCESS_DETACH:
            reshade::unregister_addon(hinstDLL);
            break;
        default:
            break;
    }
    return TRUE;
}
