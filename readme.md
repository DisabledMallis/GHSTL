# GHSTL
Game Hacking Standard Template Library

## Purpose
Most games running on Windows systems are built using Microsoft's implementation of the Standard Template Library.
The problem for hackers is that it is compiled differently in Debug and Release builds.
Because it is compiled differently, an injected DLL you may want to debug will cause crashes if you try to use the game's STL structures. (Ex. you obtain a std::string pointer and try to append a char)
The solution is often to reimplement these STL classes. This can be very annoying! And this is what GHSTL solves.

## Progress

Here is a list of everything that completed, in progress, or incomplete
```
✅ - std::string
🔄 - This list
🔄 - std::vector
🔄 - std::initializer_list
🔄 - std::shared_ptr
❌ - std::map
❌ - std::unique_ptr
```