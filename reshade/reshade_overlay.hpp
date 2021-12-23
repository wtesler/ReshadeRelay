/*
 * Copyright (C) 2021 Patrick Mours
 * License: https://github.com/crosire/reshade#license
 */

#pragma once

#if defined(IMGUI_VERSION)

#define ImTextureID reshade::api::resource_view

#include "imgui_function_table.hpp"

namespace reshade { namespace internal { const imgui_function_table *get_imgui_function_table(); } }

namespace ImGui
{
	inline ImGuiIO& GetIO() { return reshade::internal::get_imgui_function_table()->GetIO(); }
	inline ImGuiStyle& GetStyle() { return reshade::internal::get_imgui_function_table()->GetStyle(); }
	inline bool Begin(const char* name, bool* p_open, ImGuiWindowFlags flags) { return reshade::internal::get_imgui_function_table()->Begin(name, p_open, flags); }
	inline void End() { reshade::internal::get_imgui_function_table()->End(); }
	inline bool BeginChild(const char* str_id, const ImVec2& size, bool border, ImGuiWindowFlags flags) { return reshade::internal::get_imgui_function_table()->BeginChild(str_id, size, border, flags); }
	inline bool BeginChild(ImGuiID id, const ImVec2& size, bool border, ImGuiWindowFlags flags) { return reshade::internal::get_imgui_function_table()->BeginChild2(id, size, border, flags); }
	inline void EndChild() { reshade::internal::get_imgui_function_table()->EndChild(); }
	inline bool IsWindowAppearing() { return reshade::internal::get_imgui_function_table()->IsWindowAppearing(); }
	inline bool IsWindowCollapsed() { return reshade::internal::get_imgui_function_table()->IsWindowCollapsed(); }
	inline bool IsWindowFocused(ImGuiFocusedFlags flags) { return reshade::internal::get_imgui_function_table()->IsWindowFocused(flags); }
	inline bool IsWindowHovered(ImGuiHoveredFlags flags) { return reshade::internal::get_imgui_function_table()->IsWindowHovered(flags); }
	inline ImDrawList* GetWindowDrawList() { return reshade::internal::get_imgui_function_table()->GetWindowDrawList(); }
	inline float GetWindowDpiScale() { return reshade::internal::get_imgui_function_table()->GetWindowDpiScale(); }
	inline ImVec2 GetWindowPos() { return reshade::internal::get_imgui_function_table()->GetWindowPos(); }
	inline ImVec2 GetWindowSize() { return reshade::internal::get_imgui_function_table()->GetWindowSize(); }
	inline float GetWindowWidth() { return reshade::internal::get_imgui_function_table()->GetWindowWidth(); }
	inline float GetWindowHeight() { return reshade::internal::get_imgui_function_table()->GetWindowHeight(); }
	inline void SetNextWindowPos(const ImVec2& pos, ImGuiCond cond, const ImVec2& pivot) { reshade::internal::get_imgui_function_table()->SetNextWindowPos(pos, cond, pivot); }
	inline void SetNextWindowSize(const ImVec2& size, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetNextWindowSize(size, cond); }
	inline void SetNextWindowSizeConstraints(const ImVec2& size_min, const ImVec2& size_max, ImGuiSizeCallback custom_callback, void* custom_callback_data) { reshade::internal::get_imgui_function_table()->SetNextWindowSizeConstraints(size_min, size_max, custom_callback, custom_callback_data); }
	inline void SetNextWindowContentSize(const ImVec2& size) { reshade::internal::get_imgui_function_table()->SetNextWindowContentSize(size); }
	inline void SetNextWindowCollapsed(bool collapsed, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetNextWindowCollapsed(collapsed, cond); }
	inline void SetNextWindowFocus() { reshade::internal::get_imgui_function_table()->SetNextWindowFocus(); }
	inline void SetNextWindowBgAlpha(float alpha) { reshade::internal::get_imgui_function_table()->SetNextWindowBgAlpha(alpha); }
	inline void SetNextWindowViewport(ImGuiID viewport_id) { reshade::internal::get_imgui_function_table()->SetNextWindowViewport(viewport_id); }
	inline void SetWindowPos(const ImVec2& pos, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetWindowPos(pos, cond); }
	inline void SetWindowSize(const ImVec2& size, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetWindowSize(size, cond); }
	inline void SetWindowCollapsed(bool collapsed, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetWindowCollapsed(collapsed, cond); }
	inline void SetWindowFocus() { reshade::internal::get_imgui_function_table()->SetWindowFocus(); }
	inline void SetWindowFontScale(float scale) { reshade::internal::get_imgui_function_table()->SetWindowFontScale(scale); }
	inline void SetWindowPos(const char* name, const ImVec2& pos, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetWindowPos2(name, pos, cond); }
	inline void SetWindowSize(const char* name, const ImVec2& size, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetWindowSize2(name, size, cond); }
	inline void SetWindowCollapsed(const char* name, bool collapsed, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetWindowCollapsed2(name, collapsed, cond); }
	inline void SetWindowFocus(const char* name) { reshade::internal::get_imgui_function_table()->SetWindowFocus2(name); }
	inline ImVec2 GetContentRegionAvail() { return reshade::internal::get_imgui_function_table()->GetContentRegionAvail(); }
	inline ImVec2 GetContentRegionMax() { return reshade::internal::get_imgui_function_table()->GetContentRegionMax(); }
	inline ImVec2 GetWindowContentRegionMin() { return reshade::internal::get_imgui_function_table()->GetWindowContentRegionMin(); }
	inline ImVec2 GetWindowContentRegionMax() { return reshade::internal::get_imgui_function_table()->GetWindowContentRegionMax(); }
	inline float GetWindowContentRegionWidth() { return reshade::internal::get_imgui_function_table()->GetWindowContentRegionWidth(); }
	inline float GetScrollX() { return reshade::internal::get_imgui_function_table()->GetScrollX(); }
	inline float GetScrollY() { return reshade::internal::get_imgui_function_table()->GetScrollY(); }
	inline void SetScrollX(float scroll_x) { reshade::internal::get_imgui_function_table()->SetScrollX(scroll_x); }
	inline void SetScrollY(float scroll_y) { reshade::internal::get_imgui_function_table()->SetScrollY(scroll_y); }
	inline float GetScrollMaxX() { return reshade::internal::get_imgui_function_table()->GetScrollMaxX(); }
	inline float GetScrollMaxY() { return reshade::internal::get_imgui_function_table()->GetScrollMaxY(); }
	inline void SetScrollHereX(float center_x_ratio) { reshade::internal::get_imgui_function_table()->SetScrollHereX(center_x_ratio); }
	inline void SetScrollHereY(float center_y_ratio) { reshade::internal::get_imgui_function_table()->SetScrollHereY(center_y_ratio); }
	inline void SetScrollFromPosX(float local_x, float center_x_ratio) { reshade::internal::get_imgui_function_table()->SetScrollFromPosX(local_x, center_x_ratio); }
	inline void SetScrollFromPosY(float local_y, float center_y_ratio) { reshade::internal::get_imgui_function_table()->SetScrollFromPosY(local_y, center_y_ratio); }
	inline void PushFont(ImFont* font) { reshade::internal::get_imgui_function_table()->PushFont(font); }
	inline void PopFont() { reshade::internal::get_imgui_function_table()->PopFont(); }
	inline void PushStyleColor(ImGuiCol idx, ImU32 col) { reshade::internal::get_imgui_function_table()->PushStyleColor(idx, col); }
	inline void PushStyleColor(ImGuiCol idx, const ImVec4& col) { reshade::internal::get_imgui_function_table()->PushStyleColor2(idx, col); }
	inline void PopStyleColor(int count) { reshade::internal::get_imgui_function_table()->PopStyleColor(count); }
	inline void PushStyleVar(ImGuiStyleVar idx, float val) { reshade::internal::get_imgui_function_table()->PushStyleVar(idx, val); }
	inline void PushStyleVar(ImGuiStyleVar idx, const ImVec2& val) { reshade::internal::get_imgui_function_table()->PushStyleVar2(idx, val); }
	inline void PopStyleVar(int count) { reshade::internal::get_imgui_function_table()->PopStyleVar(count); }
	inline void PushAllowKeyboardFocus(bool allow_keyboard_focus) { reshade::internal::get_imgui_function_table()->PushAllowKeyboardFocus(allow_keyboard_focus); }
	inline void PopAllowKeyboardFocus() { reshade::internal::get_imgui_function_table()->PopAllowKeyboardFocus(); }
	inline void PushButtonRepeat(bool repeat) { reshade::internal::get_imgui_function_table()->PushButtonRepeat(repeat); }
	inline void PopButtonRepeat() { reshade::internal::get_imgui_function_table()->PopButtonRepeat(); }
	inline void PushItemWidth(float item_width) { reshade::internal::get_imgui_function_table()->PushItemWidth(item_width); }
	inline void PopItemWidth() { reshade::internal::get_imgui_function_table()->PopItemWidth(); }
	inline void SetNextItemWidth(float item_width) { reshade::internal::get_imgui_function_table()->SetNextItemWidth(item_width); }
	inline float CalcItemWidth() { return reshade::internal::get_imgui_function_table()->CalcItemWidth(); }
	inline void PushTextWrapPos(float wrap_local_pos_x) { reshade::internal::get_imgui_function_table()->PushTextWrapPos(wrap_local_pos_x); }
	inline void PopTextWrapPos() { reshade::internal::get_imgui_function_table()->PopTextWrapPos(); }
	inline ImFont* GetFont() { return reshade::internal::get_imgui_function_table()->GetFont(); }
	inline float GetFontSize() { return reshade::internal::get_imgui_function_table()->GetFontSize(); }
	inline ImVec2 GetFontTexUvWhitePixel() { return reshade::internal::get_imgui_function_table()->GetFontTexUvWhitePixel(); }
	inline ImU32 GetColorU32(ImGuiCol idx, float alpha_mul) { return reshade::internal::get_imgui_function_table()->GetColorU32(idx, alpha_mul); }
	inline ImU32 GetColorU32(const ImVec4& col) { return reshade::internal::get_imgui_function_table()->GetColorU322(col); }
	inline ImU32 GetColorU32(ImU32 col) { return reshade::internal::get_imgui_function_table()->GetColorU323(col); }
	inline void Separator() { reshade::internal::get_imgui_function_table()->Separator(); }
	inline void SameLine(float offset_from_start_x, float spacing) { reshade::internal::get_imgui_function_table()->SameLine(offset_from_start_x, spacing); }
	inline void NewLine() { reshade::internal::get_imgui_function_table()->NewLine(); }
	inline void Spacing() { reshade::internal::get_imgui_function_table()->Spacing(); }
	inline void Dummy(const ImVec2& size) { reshade::internal::get_imgui_function_table()->Dummy(size); }
	inline void Indent(float indent_w) { reshade::internal::get_imgui_function_table()->Indent(indent_w); }
	inline void Unindent(float indent_w) { reshade::internal::get_imgui_function_table()->Unindent(indent_w); }
	inline void BeginGroup() { reshade::internal::get_imgui_function_table()->BeginGroup(); }
	inline void EndGroup() { reshade::internal::get_imgui_function_table()->EndGroup(); }
	inline ImVec2 GetCursorPos() { return reshade::internal::get_imgui_function_table()->GetCursorPos(); }
	inline float GetCursorPosX() { return reshade::internal::get_imgui_function_table()->GetCursorPosX(); }
	inline float GetCursorPosY() { return reshade::internal::get_imgui_function_table()->GetCursorPosY(); }
	inline void SetCursorPos(const ImVec2& local_pos) { reshade::internal::get_imgui_function_table()->SetCursorPos(local_pos); }
	inline void SetCursorPosX(float local_x) { reshade::internal::get_imgui_function_table()->SetCursorPosX(local_x); }
	inline void SetCursorPosY(float local_y) { reshade::internal::get_imgui_function_table()->SetCursorPosY(local_y); }
	inline ImVec2 GetCursorStartPos() { return reshade::internal::get_imgui_function_table()->GetCursorStartPos(); }
	inline ImVec2 GetCursorScreenPos() { return reshade::internal::get_imgui_function_table()->GetCursorScreenPos(); }
	inline void SetCursorScreenPos(const ImVec2& pos) { reshade::internal::get_imgui_function_table()->SetCursorScreenPos(pos); }
	inline void AlignTextToFramePadding() { reshade::internal::get_imgui_function_table()->AlignTextToFramePadding(); }
	inline float GetTextLineHeight() { return reshade::internal::get_imgui_function_table()->GetTextLineHeight(); }
	inline float GetTextLineHeightWithSpacing() { return reshade::internal::get_imgui_function_table()->GetTextLineHeightWithSpacing(); }
	inline float GetFrameHeight() { return reshade::internal::get_imgui_function_table()->GetFrameHeight(); }
	inline float GetFrameHeightWithSpacing() { return reshade::internal::get_imgui_function_table()->GetFrameHeightWithSpacing(); }
	inline void PushID(const char* str_id) { reshade::internal::get_imgui_function_table()->PushID(str_id); }
	inline void PushID(const char* str_id_begin, const char* str_id_end) { reshade::internal::get_imgui_function_table()->PushID2(str_id_begin, str_id_end); }
	inline void PushID(const void* ptr_id) { reshade::internal::get_imgui_function_table()->PushID3(ptr_id); }
	inline void PushID(int int_id) { reshade::internal::get_imgui_function_table()->PushID4(int_id); }
	inline void PopID() { reshade::internal::get_imgui_function_table()->PopID(); }
	inline ImGuiID GetID(const char* str_id) { return reshade::internal::get_imgui_function_table()->GetID(str_id); }
	inline ImGuiID GetID(const char* str_id_begin, const char* str_id_end) { return reshade::internal::get_imgui_function_table()->GetID2(str_id_begin, str_id_end); }
	inline ImGuiID GetID(const void* ptr_id) { return reshade::internal::get_imgui_function_table()->GetID3(ptr_id); }
	inline void TextUnformatted(const char* text, const char* text_end) { reshade::internal::get_imgui_function_table()->TextUnformatted(text, text_end); }
	inline void Text(const char* fmt, ...) { va_list args; va_start(args, fmt); reshade::internal::get_imgui_function_table()->TextV(fmt, args); va_end(args); }
	inline void TextV(const char* fmt, va_list args) { reshade::internal::get_imgui_function_table()->TextV(fmt, args); }
	inline void TextColored(const ImVec4& col, const char* fmt, ...) { va_list args; va_start(args, fmt); reshade::internal::get_imgui_function_table()->TextColoredV(col, fmt, args); va_end(args); }
	inline void TextColoredV(const ImVec4& col, const char* fmt, va_list args) { reshade::internal::get_imgui_function_table()->TextColoredV(col, fmt, args); }
	inline void TextDisabled(const char* fmt, ...) { va_list args; va_start(args, fmt); reshade::internal::get_imgui_function_table()->TextDisabledV(fmt, args); va_end(args); }
	inline void TextDisabledV(const char* fmt, va_list args) { reshade::internal::get_imgui_function_table()->TextDisabledV(fmt, args); }
	inline void TextWrapped(const char* fmt, ...) { va_list args; va_start(args, fmt); reshade::internal::get_imgui_function_table()->TextWrappedV(fmt, args); va_end(args); }
	inline void TextWrappedV(const char* fmt, va_list args) { reshade::internal::get_imgui_function_table()->TextWrappedV(fmt, args); }
	inline void LabelText(const char* label, const char* fmt, ...) { va_list args; va_start(args, fmt); reshade::internal::get_imgui_function_table()->LabelTextV(label, fmt, args); va_end(args); }
	inline void LabelTextV(const char* label, const char* fmt, va_list args) { reshade::internal::get_imgui_function_table()->LabelTextV(label, fmt, args); }
	inline void BulletText(const char* fmt, ...) { va_list args; va_start(args, fmt); reshade::internal::get_imgui_function_table()->BulletTextV(fmt, args); va_end(args); }
	inline void BulletTextV(const char* fmt, va_list args) { reshade::internal::get_imgui_function_table()->BulletTextV(fmt, args); }
	inline bool Button(const char* label, const ImVec2& size) { return reshade::internal::get_imgui_function_table()->Button(label, size); }
	inline bool SmallButton(const char* label) { return reshade::internal::get_imgui_function_table()->SmallButton(label); }
	inline bool InvisibleButton(const char* str_id, const ImVec2& size, ImGuiButtonFlags flags) { return reshade::internal::get_imgui_function_table()->InvisibleButton(str_id, size, flags); }
	inline bool ArrowButton(const char* str_id, ImGuiDir dir) { return reshade::internal::get_imgui_function_table()->ArrowButton(str_id, dir); }
	inline void Image(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& tint_col, const ImVec4& border_col) { reshade::internal::get_imgui_function_table()->Image(user_texture_id, size, uv0, uv1, tint_col, border_col); }
	inline bool ImageButton(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, int frame_padding, const ImVec4& bg_col, const ImVec4& tint_col) { return reshade::internal::get_imgui_function_table()->ImageButton(user_texture_id, size, uv0, uv1, frame_padding, bg_col, tint_col); }
	inline bool Checkbox(const char* label, bool* v) { return reshade::internal::get_imgui_function_table()->Checkbox(label, v); }
	inline bool CheckboxFlags(const char* label, int* flags, int flags_value) { return reshade::internal::get_imgui_function_table()->CheckboxFlags(label, flags, flags_value); }
	inline bool CheckboxFlags(const char* label, unsigned int* flags, unsigned int flags_value) { return reshade::internal::get_imgui_function_table()->CheckboxFlags2(label, flags, flags_value); }
	inline bool RadioButton(const char* label, bool active) { return reshade::internal::get_imgui_function_table()->RadioButton(label, active); }
	inline bool RadioButton(const char* label, int* v, int v_button) { return reshade::internal::get_imgui_function_table()->RadioButton2(label, v, v_button); }
	inline void ProgressBar(float fraction, const ImVec2& size_arg, const char* overlay) { reshade::internal::get_imgui_function_table()->ProgressBar(fraction, size_arg, overlay); }
	inline void Bullet() { reshade::internal::get_imgui_function_table()->Bullet(); }
	inline bool BeginCombo(const char* label, const char* preview_value, ImGuiComboFlags flags) { return reshade::internal::get_imgui_function_table()->BeginCombo(label, preview_value, flags); }
	inline void EndCombo() { reshade::internal::get_imgui_function_table()->EndCombo(); }
	inline bool Combo(const char* label, int* current_item, const char* const items[], int items_count, int popup_max_height_in_items) { return reshade::internal::get_imgui_function_table()->Combo(label, current_item, items, items_count, popup_max_height_in_items); }
	inline bool Combo(const char* label, int* current_item, const char* items_separated_by_zeros, int popup_max_height_in_items) { return reshade::internal::get_imgui_function_table()->Combo2(label, current_item, items_separated_by_zeros, popup_max_height_in_items); }
	inline bool Combo(const char* label, int* current_item, bool(*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int popup_max_height_in_items) { return reshade::internal::get_imgui_function_table()->Combo3(label, current_item, items_getter, data, items_count, popup_max_height_in_items); }
	inline bool DragFloat(const char* label, float* v, float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragFloat(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragFloat2(const char* label, float v[2], float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragFloat2(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragFloat3(const char* label, float v[3], float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragFloat3(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragFloat4(const char* label, float v[4], float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragFloat4(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed, float v_min, float v_max, const char* format, const char* format_max, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragFloatRange2(label, v_current_min, v_current_max, v_speed, v_min, v_max, format, format_max, flags); }
	inline bool DragInt(const char* label, int* v, float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragInt(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragInt2(const char* label, int v[2], float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragInt2(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragInt3(const char* label, int v[3], float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragInt3(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragInt4(const char* label, int v[4], float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragInt4(label, v, v_speed, v_min, v_max, format, flags); }
	inline bool DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed, int v_min, int v_max, const char* format, const char* format_max, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragIntRange2(label, v_current_min, v_current_max, v_speed, v_min, v_max, format, format_max, flags); }
	inline bool DragScalar(const char* label, ImGuiDataType data_type, void* p_data, float v_speed, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragScalar(label, data_type, p_data, v_speed, p_min, p_max, format, flags); }
	inline bool DragScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, float v_speed, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->DragScalarN(label, data_type, p_data, components, v_speed, p_min, p_max, format, flags); }
	inline bool SliderFloat(const char* label, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderFloat(label, v, v_min, v_max, format, flags); }
	inline bool SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderFloat2(label, v, v_min, v_max, format, flags); }
	inline bool SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderFloat3(label, v, v_min, v_max, format, flags); }
	inline bool SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderFloat4(label, v, v_min, v_max, format, flags); }
	inline bool SliderAngle(const char* label, float* v_rad, float v_degrees_min, float v_degrees_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderAngle(label, v_rad, v_degrees_min, v_degrees_max, format, flags); }
	inline bool SliderInt(const char* label, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderInt(label, v, v_min, v_max, format, flags); }
	inline bool SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderInt2(label, v, v_min, v_max, format, flags); }
	inline bool SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderInt3(label, v, v_min, v_max, format, flags); }
	inline bool SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderInt4(label, v, v_min, v_max, format, flags); }
	inline bool SliderScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderScalar(label, data_type, p_data, p_min, p_max, format, flags); }
	inline bool SliderScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->SliderScalarN(label, data_type, p_data, components, p_min, p_max, format, flags); }
	inline bool VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->VSliderFloat(label, size, v, v_min, v_max, format, flags); }
	inline bool VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->VSliderInt(label, size, v, v_min, v_max, format, flags); }
	inline bool VSliderScalar(const char* label, const ImVec2& size, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags) { return reshade::internal::get_imgui_function_table()->VSliderScalar(label, size, data_type, p_data, p_min, p_max, format, flags); }
	inline bool InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data) { return reshade::internal::get_imgui_function_table()->InputText(label, buf, buf_size, flags, callback, user_data); }
	inline bool InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data) { return reshade::internal::get_imgui_function_table()->InputTextMultiline(label, buf, buf_size, size, flags, callback, user_data); }
	inline bool InputTextWithHint(const char* label, const char* hint, char* buf, size_t buf_size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data) { return reshade::internal::get_imgui_function_table()->InputTextWithHint(label, hint, buf, buf_size, flags, callback, user_data); }
	inline bool InputFloat(const char* label, float* v, float step, float step_fast, const char* format, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputFloat(label, v, step, step_fast, format, flags); }
	inline bool InputFloat2(const char* label, float v[2], const char* format, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputFloat2(label, v, format, flags); }
	inline bool InputFloat3(const char* label, float v[3], const char* format, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputFloat3(label, v, format, flags); }
	inline bool InputFloat4(const char* label, float v[4], const char* format, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputFloat4(label, v, format, flags); }
	inline bool InputInt(const char* label, int* v, int step, int step_fast, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputInt(label, v, step, step_fast, flags); }
	inline bool InputInt2(const char* label, int v[2], ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputInt2(label, v, flags); }
	inline bool InputInt3(const char* label, int v[3], ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputInt3(label, v, flags); }
	inline bool InputInt4(const char* label, int v[4], ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputInt4(label, v, flags); }
	inline bool InputDouble(const char* label, double* v, double step, double step_fast, const char* format, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputDouble(label, v, step, step_fast, format, flags); }
	inline bool InputScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_step, const void* p_step_fast, const char* format, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputScalar(label, data_type, p_data, p_step, p_step_fast, format, flags); }
	inline bool InputScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_step, const void* p_step_fast, const char* format, ImGuiInputTextFlags flags) { return reshade::internal::get_imgui_function_table()->InputScalarN(label, data_type, p_data, components, p_step, p_step_fast, format, flags); }
	inline bool ColorEdit3(const char* label, float col[3], ImGuiColorEditFlags flags) { return reshade::internal::get_imgui_function_table()->ColorEdit3(label, col, flags); }
	inline bool ColorEdit4(const char* label, float col[4], ImGuiColorEditFlags flags) { return reshade::internal::get_imgui_function_table()->ColorEdit4(label, col, flags); }
	inline bool ColorPicker3(const char* label, float col[3], ImGuiColorEditFlags flags) { return reshade::internal::get_imgui_function_table()->ColorPicker3(label, col, flags); }
	inline bool ColorPicker4(const char* label, float col[4], ImGuiColorEditFlags flags, const float* ref_col) { return reshade::internal::get_imgui_function_table()->ColorPicker4(label, col, flags, ref_col); }
	inline bool ColorButton(const char* desc_id, const ImVec4& col, ImGuiColorEditFlags flags, ImVec2 size) { return reshade::internal::get_imgui_function_table()->ColorButton(desc_id, col, flags, size); }
	inline void SetColorEditOptions(ImGuiColorEditFlags flags) { reshade::internal::get_imgui_function_table()->SetColorEditOptions(flags); }
	inline bool TreeNode(const char* label) { return reshade::internal::get_imgui_function_table()->TreeNode(label); }
	inline bool TreeNode(const char* str_id, const char* fmt, ...) { va_list args; va_start(args, fmt); return reshade::internal::get_imgui_function_table()->TreeNodeV(str_id, fmt, args); va_end(args); }
	inline bool TreeNode(const void* ptr_id, const char* fmt, ...) { va_list args; va_start(args, fmt); return reshade::internal::get_imgui_function_table()->TreeNodeV2(ptr_id, fmt, args); va_end(args); }
	inline bool TreeNodeV(const char* str_id, const char* fmt, va_list args) { return reshade::internal::get_imgui_function_table()->TreeNodeV(str_id, fmt, args); }
	inline bool TreeNodeV(const void* ptr_id, const char* fmt, va_list args) { return reshade::internal::get_imgui_function_table()->TreeNodeV2(ptr_id, fmt, args); }
	inline bool TreeNodeEx(const char* label, ImGuiTreeNodeFlags flags) { return reshade::internal::get_imgui_function_table()->TreeNodeEx(label, flags); }
	inline bool TreeNodeEx(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) { va_list args; va_start(args, fmt); return reshade::internal::get_imgui_function_table()->TreeNodeExV(str_id, flags, fmt, args); va_end(args); }
	inline bool TreeNodeEx(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) { va_list args; va_start(args, fmt); return reshade::internal::get_imgui_function_table()->TreeNodeExV2(ptr_id, flags, fmt, args); va_end(args); }
	inline bool TreeNodeExV(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args) { return reshade::internal::get_imgui_function_table()->TreeNodeExV(str_id, flags, fmt, args); }
	inline bool TreeNodeExV(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args) { return reshade::internal::get_imgui_function_table()->TreeNodeExV2(ptr_id, flags, fmt, args); }
	inline void TreePush(const char* str_id) { reshade::internal::get_imgui_function_table()->TreePush(str_id); }
	inline void TreePush(const void* ptr_id) { reshade::internal::get_imgui_function_table()->TreePush2(ptr_id); }
	inline void TreePop() { reshade::internal::get_imgui_function_table()->TreePop(); }
	inline float GetTreeNodeToLabelSpacing() { return reshade::internal::get_imgui_function_table()->GetTreeNodeToLabelSpacing(); }
	inline bool CollapsingHeader(const char* label, ImGuiTreeNodeFlags flags) { return reshade::internal::get_imgui_function_table()->CollapsingHeader(label, flags); }
	inline bool CollapsingHeader(const char* label, bool* p_visible, ImGuiTreeNodeFlags flags) { return reshade::internal::get_imgui_function_table()->CollapsingHeader2(label, p_visible, flags); }
	inline void SetNextItemOpen(bool is_open, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetNextItemOpen(is_open, cond); }
	inline bool Selectable(const char* label, bool selected, ImGuiSelectableFlags flags, const ImVec2& size) { return reshade::internal::get_imgui_function_table()->Selectable(label, selected, flags, size); }
	inline bool Selectable(const char* label, bool* p_selected, ImGuiSelectableFlags flags, const ImVec2& size) { return reshade::internal::get_imgui_function_table()->Selectable2(label, p_selected, flags, size); }
	inline bool BeginListBox(const char* label, const ImVec2& size) { return reshade::internal::get_imgui_function_table()->BeginListBox(label, size); }
	inline void EndListBox() { reshade::internal::get_imgui_function_table()->EndListBox(); }
	inline bool ListBox(const char* label, int* current_item, const char* const items[], int items_count, int height_in_items) { return reshade::internal::get_imgui_function_table()->ListBox(label, current_item, items, items_count, height_in_items); }
	inline bool ListBox(const char* label, int* current_item, bool(*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items) { return reshade::internal::get_imgui_function_table()->ListBox2(label, current_item, items_getter, data, items_count, height_in_items); }
	inline void PlotLines(const char* label, const float* values, int values_count, int values_offset, const char* overlay_text, float scale_min, float scale_max, ImVec2 graph_size, int stride) { reshade::internal::get_imgui_function_table()->PlotLines(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size, stride); }
	inline void PlotLines(const char* label, float(*values_getter)(void* data, int idx), void* data, int values_count, int values_offset, const char* overlay_text, float scale_min, float scale_max, ImVec2 graph_size) { reshade::internal::get_imgui_function_table()->PlotLines2(label, values_getter, data, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size); }
	inline void PlotHistogram(const char* label, const float* values, int values_count, int values_offset, const char* overlay_text, float scale_min, float scale_max, ImVec2 graph_size, int stride) { reshade::internal::get_imgui_function_table()->PlotHistogram(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size, stride); }
	inline void PlotHistogram(const char* label, float(*values_getter)(void* data, int idx), void* data, int values_count, int values_offset, const char* overlay_text, float scale_min, float scale_max, ImVec2 graph_size) { reshade::internal::get_imgui_function_table()->PlotHistogram2(label, values_getter, data, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size); }
	inline void Value(const char* prefix, bool b) { reshade::internal::get_imgui_function_table()->Value(prefix, b); }
	inline void Value(const char* prefix, int v) { reshade::internal::get_imgui_function_table()->Value2(prefix, v); }
	inline void Value(const char* prefix, unsigned int v) { reshade::internal::get_imgui_function_table()->Value3(prefix, v); }
	inline void Value(const char* prefix, float v, const char* float_format) { reshade::internal::get_imgui_function_table()->Value4(prefix, v, float_format); }
	inline bool BeginMenuBar() { return reshade::internal::get_imgui_function_table()->BeginMenuBar(); }
	inline void EndMenuBar() { reshade::internal::get_imgui_function_table()->EndMenuBar(); }
	inline bool BeginMainMenuBar() { return reshade::internal::get_imgui_function_table()->BeginMainMenuBar(); }
	inline void EndMainMenuBar() { reshade::internal::get_imgui_function_table()->EndMainMenuBar(); }
	inline bool BeginMenu(const char* label, bool enabled) { return reshade::internal::get_imgui_function_table()->BeginMenu(label, enabled); }
	inline void EndMenu() { reshade::internal::get_imgui_function_table()->EndMenu(); }
	inline bool MenuItem(const char* label, const char* shortcut, bool selected, bool enabled) { return reshade::internal::get_imgui_function_table()->MenuItem(label, shortcut, selected, enabled); }
	inline bool MenuItem(const char* label, const char* shortcut, bool* p_selected, bool enabled) { return reshade::internal::get_imgui_function_table()->MenuItem2(label, shortcut, p_selected, enabled); }
	inline void BeginTooltip() { reshade::internal::get_imgui_function_table()->BeginTooltip(); }
	inline void EndTooltip() { reshade::internal::get_imgui_function_table()->EndTooltip(); }
	inline void SetTooltip(const char* fmt, ...) { va_list args; va_start(args, fmt); reshade::internal::get_imgui_function_table()->SetTooltipV(fmt, args); va_end(args); }
	inline void SetTooltipV(const char* fmt, va_list args) { reshade::internal::get_imgui_function_table()->SetTooltipV(fmt, args); }
	inline bool BeginPopup(const char* str_id, ImGuiWindowFlags flags) { return reshade::internal::get_imgui_function_table()->BeginPopup(str_id, flags); }
	inline bool BeginPopupModal(const char* name, bool* p_open, ImGuiWindowFlags flags) { return reshade::internal::get_imgui_function_table()->BeginPopupModal(name, p_open, flags); }
	inline void EndPopup() { reshade::internal::get_imgui_function_table()->EndPopup(); }
	inline void OpenPopup(const char* str_id, ImGuiPopupFlags popup_flags) { reshade::internal::get_imgui_function_table()->OpenPopup(str_id, popup_flags); }
	inline void OpenPopup(ImGuiID id, ImGuiPopupFlags popup_flags) { reshade::internal::get_imgui_function_table()->OpenPopup2(id, popup_flags); }
	inline void OpenPopupOnItemClick(const char* str_id, ImGuiPopupFlags popup_flags) { reshade::internal::get_imgui_function_table()->OpenPopupOnItemClick(str_id, popup_flags); }
	inline void CloseCurrentPopup() { reshade::internal::get_imgui_function_table()->CloseCurrentPopup(); }
	inline bool BeginPopupContextItem(const char* str_id, ImGuiPopupFlags popup_flags) { return reshade::internal::get_imgui_function_table()->BeginPopupContextItem(str_id, popup_flags); }
	inline bool BeginPopupContextWindow(const char* str_id, ImGuiPopupFlags popup_flags) { return reshade::internal::get_imgui_function_table()->BeginPopupContextWindow(str_id, popup_flags); }
	inline bool BeginPopupContextVoid(const char* str_id, ImGuiPopupFlags popup_flags) { return reshade::internal::get_imgui_function_table()->BeginPopupContextVoid(str_id, popup_flags); }
	inline bool IsPopupOpen(const char* str_id, ImGuiPopupFlags flags) { return reshade::internal::get_imgui_function_table()->IsPopupOpen(str_id, flags); }
	inline bool BeginTable(const char* str_id, int column, ImGuiTableFlags flags, const ImVec2& outer_size, float inner_width) { return reshade::internal::get_imgui_function_table()->BeginTable(str_id, column, flags, outer_size, inner_width); }
	inline void EndTable() { reshade::internal::get_imgui_function_table()->EndTable(); }
	inline void TableNextRow(ImGuiTableRowFlags row_flags, float min_row_height) { reshade::internal::get_imgui_function_table()->TableNextRow(row_flags, min_row_height); }
	inline bool TableNextColumn() { return reshade::internal::get_imgui_function_table()->TableNextColumn(); }
	inline bool TableSetColumnIndex(int column_n) { return reshade::internal::get_imgui_function_table()->TableSetColumnIndex(column_n); }
	inline void TableSetupColumn(const char* label, ImGuiTableColumnFlags flags, float init_width_or_weight, ImGuiID user_id) { reshade::internal::get_imgui_function_table()->TableSetupColumn(label, flags, init_width_or_weight, user_id); }
	inline void TableSetupScrollFreeze(int cols, int rows) { reshade::internal::get_imgui_function_table()->TableSetupScrollFreeze(cols, rows); }
	inline void TableHeadersRow() { reshade::internal::get_imgui_function_table()->TableHeadersRow(); }
	inline void TableHeader(const char* label) { reshade::internal::get_imgui_function_table()->TableHeader(label); }
	inline ImGuiTableSortSpecs* TableGetSortSpecs() { return reshade::internal::get_imgui_function_table()->TableGetSortSpecs(); }
	inline int TableGetColumnCount() { return reshade::internal::get_imgui_function_table()->TableGetColumnCount(); }
	inline int TableGetColumnIndex() { return reshade::internal::get_imgui_function_table()->TableGetColumnIndex(); }
	inline int TableGetRowIndex() { return reshade::internal::get_imgui_function_table()->TableGetRowIndex(); }
	inline ImGuiTableColumnFlags TableGetColumnFlags(int column_n) { return reshade::internal::get_imgui_function_table()->TableGetColumnFlags(column_n); }
	inline void TableSetColumnEnabled(int column_n, bool v) { reshade::internal::get_imgui_function_table()->TableSetColumnEnabled(column_n, v); }
	inline void TableSetBgColor(ImGuiTableBgTarget target, ImU32 color, int column_n) { reshade::internal::get_imgui_function_table()->TableSetBgColor(target, color, column_n); }
	inline void Columns(int count, const char* id, bool border) { reshade::internal::get_imgui_function_table()->Columns(count, id, border); }
	inline void NextColumn() { reshade::internal::get_imgui_function_table()->NextColumn(); }
	inline int GetColumnIndex() { return reshade::internal::get_imgui_function_table()->GetColumnIndex(); }
	inline float GetColumnWidth(int column_index) { return reshade::internal::get_imgui_function_table()->GetColumnWidth(column_index); }
	inline void SetColumnWidth(int column_index, float width) { reshade::internal::get_imgui_function_table()->SetColumnWidth(column_index, width); }
	inline float GetColumnOffset(int column_index) { return reshade::internal::get_imgui_function_table()->GetColumnOffset(column_index); }
	inline void SetColumnOffset(int column_index, float offset_x) { reshade::internal::get_imgui_function_table()->SetColumnOffset(column_index, offset_x); }
	inline int GetColumnsCount() { return reshade::internal::get_imgui_function_table()->GetColumnsCount(); }
	inline bool BeginTabBar(const char* str_id, ImGuiTabBarFlags flags) { return reshade::internal::get_imgui_function_table()->BeginTabBar(str_id, flags); }
	inline void EndTabBar() { reshade::internal::get_imgui_function_table()->EndTabBar(); }
	inline bool BeginTabItem(const char* label, bool* p_open, ImGuiTabItemFlags flags) { return reshade::internal::get_imgui_function_table()->BeginTabItem(label, p_open, flags); }
	inline void EndTabItem() { reshade::internal::get_imgui_function_table()->EndTabItem(); }
	inline bool TabItemButton(const char* label, ImGuiTabItemFlags flags) { return reshade::internal::get_imgui_function_table()->TabItemButton(label, flags); }
	inline void SetTabItemClosed(const char* tab_or_docked_window_label) { reshade::internal::get_imgui_function_table()->SetTabItemClosed(tab_or_docked_window_label); }
	inline ImGuiID DockSpace(ImGuiID id, const ImVec2& size, ImGuiDockNodeFlags flags, const ImGuiWindowClass* window_class) { return reshade::internal::get_imgui_function_table()->DockSpace(id, size, flags, window_class); }
	inline ImGuiID DockSpaceOverViewport(const ImGuiViewport* viewport, ImGuiDockNodeFlags flags, const ImGuiWindowClass* window_class) { return reshade::internal::get_imgui_function_table()->DockSpaceOverViewport(viewport, flags, window_class); }
	inline void SetNextWindowDockID(ImGuiID dock_id, ImGuiCond cond) { reshade::internal::get_imgui_function_table()->SetNextWindowDockID(dock_id, cond); }
	inline void SetNextWindowClass(const ImGuiWindowClass* window_class) { reshade::internal::get_imgui_function_table()->SetNextWindowClass(window_class); }
	inline ImGuiID GetWindowDockID() { return reshade::internal::get_imgui_function_table()->GetWindowDockID(); }
	inline bool IsWindowDocked() { return reshade::internal::get_imgui_function_table()->IsWindowDocked(); }
	inline bool BeginDragDropSource(ImGuiDragDropFlags flags) { return reshade::internal::get_imgui_function_table()->BeginDragDropSource(flags); }
	inline bool SetDragDropPayload(const char* type, const void* data, size_t sz, ImGuiCond cond) { return reshade::internal::get_imgui_function_table()->SetDragDropPayload(type, data, sz, cond); }
	inline void EndDragDropSource() { reshade::internal::get_imgui_function_table()->EndDragDropSource(); }
	inline bool BeginDragDropTarget() { return reshade::internal::get_imgui_function_table()->BeginDragDropTarget(); }
	inline void EndDragDropTarget() { reshade::internal::get_imgui_function_table()->EndDragDropTarget(); }
	inline void BeginDisabled(bool disabled) { reshade::internal::get_imgui_function_table()->BeginDisabled(disabled); }
	inline void EndDisabled() { reshade::internal::get_imgui_function_table()->EndDisabled(); }
	inline void PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect) { reshade::internal::get_imgui_function_table()->PushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect); }
	inline void PopClipRect() { reshade::internal::get_imgui_function_table()->PopClipRect(); }
	inline void SetItemDefaultFocus() { reshade::internal::get_imgui_function_table()->SetItemDefaultFocus(); }
	inline void SetKeyboardFocusHere(int offset) { reshade::internal::get_imgui_function_table()->SetKeyboardFocusHere(offset); }
	inline bool IsItemHovered(ImGuiHoveredFlags flags) { return reshade::internal::get_imgui_function_table()->IsItemHovered(flags); }
	inline bool IsItemActive() { return reshade::internal::get_imgui_function_table()->IsItemActive(); }
	inline bool IsItemFocused() { return reshade::internal::get_imgui_function_table()->IsItemFocused(); }
	inline bool IsItemClicked(ImGuiMouseButton mouse_button) { return reshade::internal::get_imgui_function_table()->IsItemClicked(mouse_button); }
	inline bool IsItemVisible() { return reshade::internal::get_imgui_function_table()->IsItemVisible(); }
	inline bool IsItemEdited() { return reshade::internal::get_imgui_function_table()->IsItemEdited(); }
	inline bool IsItemActivated() { return reshade::internal::get_imgui_function_table()->IsItemActivated(); }
	inline bool IsItemDeactivated() { return reshade::internal::get_imgui_function_table()->IsItemDeactivated(); }
	inline bool IsItemDeactivatedAfterEdit() { return reshade::internal::get_imgui_function_table()->IsItemDeactivatedAfterEdit(); }
	inline bool IsItemToggledOpen() { return reshade::internal::get_imgui_function_table()->IsItemToggledOpen(); }
	inline bool IsAnyItemHovered() { return reshade::internal::get_imgui_function_table()->IsAnyItemHovered(); }
	inline bool IsAnyItemActive() { return reshade::internal::get_imgui_function_table()->IsAnyItemActive(); }
	inline bool IsAnyItemFocused() { return reshade::internal::get_imgui_function_table()->IsAnyItemFocused(); }
	inline ImVec2 GetItemRectMin() { return reshade::internal::get_imgui_function_table()->GetItemRectMin(); }
	inline ImVec2 GetItemRectMax() { return reshade::internal::get_imgui_function_table()->GetItemRectMax(); }
	inline ImVec2 GetItemRectSize() { return reshade::internal::get_imgui_function_table()->GetItemRectSize(); }
	inline void SetItemAllowOverlap() { reshade::internal::get_imgui_function_table()->SetItemAllowOverlap(); }
	inline ImGuiViewport* GetMainViewport() { return reshade::internal::get_imgui_function_table()->GetMainViewport(); }
	inline bool IsRectVisible(const ImVec2& size) { return reshade::internal::get_imgui_function_table()->IsRectVisible(size); }
	inline bool IsRectVisible(const ImVec2& rect_min, const ImVec2& rect_max) { return reshade::internal::get_imgui_function_table()->IsRectVisible2(rect_min, rect_max); }
	inline double GetTime() { return reshade::internal::get_imgui_function_table()->GetTime(); }
	inline int GetFrameCount() { return reshade::internal::get_imgui_function_table()->GetFrameCount(); }
	inline ImDrawList* GetBackgroundDrawList() { return reshade::internal::get_imgui_function_table()->GetBackgroundDrawList(); }
	inline ImDrawList* GetForegroundDrawList() { return reshade::internal::get_imgui_function_table()->GetForegroundDrawList(); }
	inline ImDrawList* GetBackgroundDrawList(ImGuiViewport* viewport) { return reshade::internal::get_imgui_function_table()->GetBackgroundDrawList2(viewport); }
	inline ImDrawList* GetForegroundDrawList(ImGuiViewport* viewport) { return reshade::internal::get_imgui_function_table()->GetForegroundDrawList2(viewport); }
	inline ImDrawListSharedData* GetDrawListSharedData() { return reshade::internal::get_imgui_function_table()->GetDrawListSharedData(); }
	inline void SetStateStorage(ImGuiStorage* storage) { reshade::internal::get_imgui_function_table()->SetStateStorage(storage); }
	inline ImGuiStorage* GetStateStorage() { return reshade::internal::get_imgui_function_table()->GetStateStorage(); }
	inline void CalcListClipping(int items_count, float items_height, int* out_items_display_start, int* out_items_display_end) { reshade::internal::get_imgui_function_table()->CalcListClipping(items_count, items_height, out_items_display_start, out_items_display_end); }
	inline bool BeginChildFrame(ImGuiID id, const ImVec2& size, ImGuiWindowFlags flags) { return reshade::internal::get_imgui_function_table()->BeginChildFrame(id, size, flags); }
	inline void EndChildFrame() { reshade::internal::get_imgui_function_table()->EndChildFrame(); }
	inline ImVec2 CalcTextSize(const char* text, const char* text_end, bool hide_text_after_double_hash, float wrap_width) { return reshade::internal::get_imgui_function_table()->CalcTextSize(text, text_end, hide_text_after_double_hash, wrap_width); }
	inline ImVec4 ColorConvertU32ToFloat4(ImU32 in) { return reshade::internal::get_imgui_function_table()->ColorConvertU32ToFloat4(in); }
	inline ImU32 ColorConvertFloat4ToU32(const ImVec4& in) { return reshade::internal::get_imgui_function_table()->ColorConvertFloat4ToU32(in); }
	inline void ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v) { reshade::internal::get_imgui_function_table()->ColorConvertRGBtoHSV(r, g, b, out_h, out_s, out_v); }
	inline void ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b) { reshade::internal::get_imgui_function_table()->ColorConvertHSVtoRGB(h, s, v, out_r, out_g, out_b); }
	inline int GetKeyIndex(ImGuiKey imgui_key) { return reshade::internal::get_imgui_function_table()->GetKeyIndex(imgui_key); }
	inline bool IsKeyDown(int user_key_index) { return reshade::internal::get_imgui_function_table()->IsKeyDown(user_key_index); }
	inline bool IsKeyPressed(int user_key_index, bool repeat) { return reshade::internal::get_imgui_function_table()->IsKeyPressed(user_key_index, repeat); }
	inline bool IsKeyReleased(int user_key_index) { return reshade::internal::get_imgui_function_table()->IsKeyReleased(user_key_index); }
	inline int GetKeyPressedAmount(int key_index, float repeat_delay, float rate) { return reshade::internal::get_imgui_function_table()->GetKeyPressedAmount(key_index, repeat_delay, rate); }
	inline void CaptureKeyboardFromApp(bool want_capture_keyboard_value) { reshade::internal::get_imgui_function_table()->CaptureKeyboardFromApp(want_capture_keyboard_value); }
	inline bool IsMouseDown(ImGuiMouseButton button) { return reshade::internal::get_imgui_function_table()->IsMouseDown(button); }
	inline bool IsMouseClicked(ImGuiMouseButton button, bool repeat) { return reshade::internal::get_imgui_function_table()->IsMouseClicked(button, repeat); }
	inline bool IsMouseReleased(ImGuiMouseButton button) { return reshade::internal::get_imgui_function_table()->IsMouseReleased(button); }
	inline bool IsMouseDoubleClicked(ImGuiMouseButton button) { return reshade::internal::get_imgui_function_table()->IsMouseDoubleClicked(button); }
	inline bool IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, bool clip) { return reshade::internal::get_imgui_function_table()->IsMouseHoveringRect(r_min, r_max, clip); }
	inline bool IsMousePosValid(const ImVec2* mouse_pos) { return reshade::internal::get_imgui_function_table()->IsMousePosValid(mouse_pos); }
	inline bool IsAnyMouseDown() { return reshade::internal::get_imgui_function_table()->IsAnyMouseDown(); }
	inline ImVec2 GetMousePos() { return reshade::internal::get_imgui_function_table()->GetMousePos(); }
	inline ImVec2 GetMousePosOnOpeningCurrentPopup() { return reshade::internal::get_imgui_function_table()->GetMousePosOnOpeningCurrentPopup(); }
	inline bool IsMouseDragging(ImGuiMouseButton button, float lock_threshold) { return reshade::internal::get_imgui_function_table()->IsMouseDragging(button, lock_threshold); }
	inline ImVec2 GetMouseDragDelta(ImGuiMouseButton button, float lock_threshold) { return reshade::internal::get_imgui_function_table()->GetMouseDragDelta(button, lock_threshold); }
	inline void ResetMouseDragDelta(ImGuiMouseButton button) { reshade::internal::get_imgui_function_table()->ResetMouseDragDelta(button); }
	inline ImGuiMouseCursor GetMouseCursor() { return reshade::internal::get_imgui_function_table()->GetMouseCursor(); }
	inline void SetMouseCursor(ImGuiMouseCursor cursor_type) { reshade::internal::get_imgui_function_table()->SetMouseCursor(cursor_type); }
	inline void CaptureMouseFromApp(bool want_capture_mouse_value) { reshade::internal::get_imgui_function_table()->CaptureMouseFromApp(want_capture_mouse_value); }
	inline void SetClipboardText(const char* text) { reshade::internal::get_imgui_function_table()->SetClipboardText(text); }
	inline bool DebugCheckVersionAndDataLayout(const char* version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx) { return reshade::internal::get_imgui_function_table()->DebugCheckVersionAndDataLayout(version_str, sz_io, sz_style, sz_vec2, sz_vec4, sz_drawvert, sz_drawidx); }
	inline void SetAllocatorFunctions(ImGuiMemAllocFunc alloc_func, ImGuiMemFreeFunc free_func, void* user_data) { reshade::internal::get_imgui_function_table()->SetAllocatorFunctions(alloc_func, free_func, user_data); }
	inline void GetAllocatorFunctions(ImGuiMemAllocFunc* p_alloc_func, ImGuiMemFreeFunc* p_free_func, void** p_user_data) { reshade::internal::get_imgui_function_table()->GetAllocatorFunctions(p_alloc_func, p_free_func, p_user_data); }
	inline void* MemAlloc(size_t size) { return reshade::internal::get_imgui_function_table()->MemAlloc(size); }
	inline void MemFree(void* ptr) { reshade::internal::get_imgui_function_table()->MemFree(ptr); }
	inline ImGuiPlatformIO& GetPlatformIO() { return reshade::internal::get_imgui_function_table()->GetPlatformIO(); }
	inline void UpdatePlatformWindows() { reshade::internal::get_imgui_function_table()->UpdatePlatformWindows(); }
	inline void RenderPlatformWindowsDefault(void* platform_render_arg, void* renderer_render_arg) { reshade::internal::get_imgui_function_table()->RenderPlatformWindowsDefault(platform_render_arg, renderer_render_arg); }
	inline void DestroyPlatformWindows() { reshade::internal::get_imgui_function_table()->DestroyPlatformWindows(); }
	inline ImGuiViewport* FindViewportByID(ImGuiID id) { return reshade::internal::get_imgui_function_table()->FindViewportByID(id); }
	inline ImGuiViewport* FindViewportByPlatformHandle(void* platform_handle) { return reshade::internal::get_imgui_function_table()->FindViewportByPlatformHandle(platform_handle); }
}

#endif
