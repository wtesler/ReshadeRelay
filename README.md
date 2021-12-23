# Reshade Relay

**WIP: This is unfinished and currently only
creates the CPU-side texture but does not do anything
with it!**

A Reshade 5 add-on which copies the final frame
of a game to an accessible CPU-side texture and then 
saves that texture to interprocess memory.

The idea is that other processes can then access the
interprocess memory and do whatever they want with it.

## Build Instructions

Use Visual Studio toolchain to create `dll` file.

Then rename `.dll` to `.addon` and put in same folder as
Reshade 5 build.

Reshade 5 will run the addon automatically when the game
is booted up.
