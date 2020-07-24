# LuaScript [![License](https://img.shields.io/:license-apache-blue.svg)](https://opensource.org/licenses/Apache-2.0)

Lua 5.4 language support for Godot Engine 3.2.x-stable (4.0-dev too unstable to work with for now)

> WIP (heavily updated so you can expect constants changes - no commitment with feature freezing at this moment)
>
> Current progress:
>
> - I decided to use the Antlr4 library to do the parsing of Lua code. I am in the process of integrating it with the LuaScript module. With this in place it will be possible to start answering engine call backs, like for example, \_ready(), \_process() etc.

## Features

- Full Godot's gameplay API implementation (feature complete on par with GDScript)
- Configurable API sandbox
- Object Oriented Programming based on Lua's tables and metatables
- Support for inheritance from Lua base class and file
- Support for inheritance from native base class and file
- Support for properties
  - Getters, setters and default values
  - Editing properties values in the property editor
- Support for signals
  - Signal connect, emit and receive from code
  - Signal connect from the editor (currently not well supported by Godot)
- Lua language coding in Godot's built in editor
  - On the fly source code linting and static analysis
  - On the fly source code syntax highlighting
  - Source code beautifier
    - Format the entire active file
    - Format the selected text
    - Format automatically when saving
  - Source code refactoring (currently not supported by Godot)
  - Code editor color theme (Icemoon)
- Lua language coding in external editor (possibly with the same capabilities as the built in editor)
- Support for multiple Lua runtimes (PUC Rio Lua 5.4 and LuaJIT)
- Debugging tools (possibly with all Godot's debugging capabilities)
- Tool creation to extend the built in editor functionalities
- Support for advanced package assembling
  - Dead code elimination throught tree-shaking
  - Code uglifier and minifier
  - Compilation into binary bytecode
  - Compression or encryption
- Export for all Godot's supported platforms

## How to Build

My development environment is based primarily on Linux and Mac so I don't know if it will work on Windows. Shouldn't be a problem though as I'm only making use of standard C++17 code and the available Godot C++ API. If you experience any problem when building on Windows please report an issue and I'll be glad to work on solving it.

So first of all you have to have Godot successfully built in your system, which is beyond the scope of this simple how to.

Now, assuming you can git clone from GitHub, just clone LuaScript into Godo's source code 'modules' folder and then, build Godot again adding to the command line the following options

module_luascript_enabled=yes

If everything has gone well, you'll have a running Godot with Lua support!

For now not much is done but the simple fact of having Godot built with this initial code is already a cool thing!

So keep watching the development as I'm slowlly but steadly adding more features.

Have fun!

## Issues and Support

Have a bug? Please create an issue here on GitHub!

https://github.com/perbone/luascript/issues

## Versioning

For transparency and insight into our release cycle, releases are be numbered with the [semantic versioning](http://semver.org/) format: `<major>.<minor>.<patch>` and constructed with the following guidelines:

- Breaking backwards compatibility bumps the major
- New additions without breaking backwards compatibility bumps the minor
- Bug fixes and misc changes bump the patch

## Contributors

- Paulo Perbone ([@perbone](https://twitter.com/perbone))

## License

Copyright 2017-2020 Paulo Perbone

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License
