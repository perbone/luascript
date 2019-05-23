# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [Unreleased]

## 0.0.28 - 2019-05-22

### Added

- Fix broken compilation for 3.2-master after API change
- Add const modifier to LuaScriptSyntaxHighlighter::get_name() method

## 0.0.27 - 2019-04-14

### Added

- Add debug helper function std::string get_notification_name(const int constant_value)

## 0.0.26 - 2019-03-03

### Fixed

- Fix missing include cstdlib that was previously included from godot's

## 0.0.25 - 2019-01-04

### Added

- Add new Script::is_valid() method (fix broken compilation for 3.1-alphas)

## 0.0.24 - 2018-10-11

### Changed

- Bump to C++17 standard due use of PEGTL 3.0 dependency library
- Update PEGTL library from master (3.0-rc)

## 0.0.23 - 2018-09-15

### Fixed

- Fix include path for Godot's headers

## 0.0.22 - 2018-08-20

### Changed

- Update PEGTL library from master

### Fixed

- Fix missing return keyword (how could I miss that?!)

## 0.0.21 - 2018-08-11

### Changed

- LuaScriptLanguage to support new 3.1 'validation' with warnings method signature

## 0.0.20 - 2018-07-23

### Added

- Add PEGTL dependency source code
- Add basic support for script validation

### Removed

- Remove lpeg dependency

## 0.0.19 - 2018-07-22

### Changed

- LuaScriptLanguage to support new 3.1 'validation' method signature

## 0.0.18 - 2018-06-28

### Changed

- Add Mac as development environment

## 0.0.17 - 2018-06-23

### Added

- Add lua-5.4.0-work2 dependency source code
- Add lpeg-1.0.1 dependency source code

### Changed

- Scons scripts to build all dependencies

## 0.0.16 - 2018-06-05

### Added

- Add initial code for luascript syntax highlighter

## 0.0.15 - 2018-05-27

### Added

- Add missing multi-line strings delimiter

## 0.0.14 - 2018-05-20

### Added

- Add product feature list to base the stories backlog

## 0.0.12 - 2018-05-19

### Added

- Add simple how to for how to build Godot with LuaScript support

## 0.0.11 - 2018-05-18

### Added

- Add missing new keyword 'undef' from Lua 5.4
- Add missing copyright header from Godot project to .clang-format file

### Fixed

- Fix some missing 'types of changes' in this CHANGE file

## 0.0.10 - 2018-05-14

### Added

- Add Lua 5.4 implementation support via SCons command line opion 'lua_home'

### Changed

- Change Lua init/destroy from constructor/destructor to ScriptLanguage lifecycle hooks

### Fixed

- Fix some error msg after template creation

## 0.0.9 - 2018-05-13

### Changed

- Refectoring for script load

### Fixed

- Fix print_debug macro when not debugging
- Fix comments

## 0.0.8 - 2018-05-12

### Added

- Add LuaScriptLanguage singlenton
- Add placeholder support
- Add lots of debug logging
- Add vscode ignore

## 0.0.7 - 2018-05-09

### Added

- Add constants for some of the virtual methods from Godot API
- Add more debug print information

## 0.0.6 - 2018-05-07

### Added

- Add syncronization support to LuaScriptLanguage
- Add some missing field members

## 0.0.5 - 2018-05-06

### Added

- Add debug helper functions

## 0.0.4 - 2018-05-03

### Added

- Add source code loading

## 0.0.3 - 2018-05-01

### Added

- Add debug prints + instantiation for all main classes so Godot doesn't crash

### Changed

- Make LuaScriptLanguage a singleton

## 0.0.2 - 2018-04-29

### Added

- Add basic implementation enough to run the engine.
- Add clang format compatible with Godot source code.
- Add intial (buggy) support for resource load and saving.

## 0.0.1 - 2018-04-28

### Added

- Add this CHANGELOG file.
- Add initial boilerplate code for a basic module.
- Add declarations for all virtual member functions for the minimun (I think)
  required for the engine to recognize Lua as an available language.
