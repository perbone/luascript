# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [Unreleased]

## 0.0.56 - 2020-09-25

### Changed

* Bump Lua to 5.4.1 from master

## 0.0.55 - 2020-09-09

### Added

* Add initial wip AST package

## 0.0.54 - 2020-09-08

### Fixed

* Fix scons build system files (was broken on windows due use of C++17)

## 0.0.53 - 2020-08-29

### Added

* Add compilation for Antlr4
* Add scons build for editor

### Fixed

* Fix env misconfiguration
* Fix file permissions
* Fix code style format
* Fix name conflict with Godot core Ref<> type

### Changed

* Update clang-format to be in sync with Godot's oficial
* Update .editorconfig to be in sync with Godot's oficial

## Removed

* Remove direct lua lib calls

## 0.0.52 - 2020-08-18

### Fixed

* Fix Lua 5.4 minor bugs (source code from Lua's master - unreleased)

## 0.0.51 - 2020-07-27

### Fixed

* Fix Lua 5.4 minor bugs (source code from Lua's master - unreleased)

## 0.0.50 - 2020-07-24

### Changed

* Update clang-format to be in sync with Godot's oficial

### Removed

* Remove lib pegtl

### Fixed

* Fix Lua 5.4 minor bugs (source code from Lua's master - unreleased)

## 0.0.49 - 2020-07-09

### Changed

* Update to lua 5.4 final source code from master

## 0.0.48 - 2020-06-25

### Changed

* Update to lua 5.4-RC source code from master
## 0.0.47 - 2020-06-17

### Changed

* Update to lua 5.4-RC source code from master

## 0.0.46 - 2020-05-11

### Changed

* Update to lua 5.4-RC source code from master

## 0.0.45 - 2020-04-24

### Changed

* Update to lua 5.4-RC source code from master

## 0.0.44 - 2020-04-13

### Changed

* Update to lua 5.4-beta source code from master

## 0.0.43 - 2020-03-05

### Changed

* Bump to lua 5.4-beta source code from master

## 0.0.42 - 2020-02-11

### Fixed

* Fix broken compilation for 3.2-stable after API change

### Changed

* Bump to lua 5.4-beta source code from master
* Bump Godot API target to 3.2-stable/4.0-dev and later

## 0.0.41 - 2020-01-02

### Changed

* Update copyright notice

## 0.0.40 - 2019-12-01

### Added

* Add missing new methods

## 0.0.39 - 2019-10-27

### Changed

* Debug build will only be compiled when scons target={debug|release_debug}

## 0.0.38 - 2019-10-18

### Changed

* Bump to lua 5.4-beta source code from master

## 0.0.37 - 2019-10-16

### Fixed

* Fix missing includes after last refactor when building for release

## 0.0.36 - 2019-10-12

### Changed

* Refactor so each class shall have it's own header and implementation file

## 0.0.35 - 2019-10-10

### Added

* Add Lua icon

## 0.0.34 - 2019-09-18

### Added

* Add missing feature 'Export for all Godot's supported platforms'

## 0.0.33 - 2019-07-23

### Changed

* Bump Godot API target to 3.2-master and later

## 0.0.32 - 2019-07-13

### Fixed

* Fix broken compilation for 3.2-master after API change

## 0.0.31 - 2019-06-12

### Changed

* Bump to lua 5.4-alpha-rc2 source code from master

## 0.0.30 - 2019-06-02

### Changed

* Bump to lua 5.4-alpha-rc1 source code from master

## 0.0.29 - 2019-05-25

### Changed

* Update lua 5.4 source code from master

## 0.0.28 - 2019-05-22

### Added

* Add const modifier to LuaScriptSyntaxHighlighter::get_name() method

### Fixed

* Fix broken compilation for 3.2-master after API change

## 0.0.27 - 2019-04-14

### Added

* Add debug helper function std::string get_notification_name(const int constant_value)

## 0.0.26 - 2019-03-03

### Fixed

* Fix missing include cstdlib that was previously included from godot's

## 0.0.25 - 2019-01-04

### Added

* Add new Script::is_valid() method (fix broken compilation for 3.1-alphas)

## 0.0.24 - 2018-10-11

### Changed

* Bump to C++17 standard due use of PEGTL 3.0 dependency library
* Update PEGTL library from master (3.0-rc)

## 0.0.23 - 2018-09-15

### Fixed

* Fix include path for Godot's headers

## 0.0.22 - 2018-08-20

### Changed

* Update PEGTL library from master

### Fixed

* Fix missing return keyword (how could I miss that?!)

## 0.0.21 - 2018-08-11

### Changed

* LuaScriptLanguage to support new 3.1 'validation' with warnings method signature

## 0.0.20 - 2018-07-23

### Added

* Add PEGTL dependency source code
* Add basic support for script validation

### Removed

* Remove lpeg dependency

## 0.0.19 - 2018-07-22

### Changed

* LuaScriptLanguage to support new 3.1 'validation' method signature

## 0.0.18 - 2018-06-28

### Changed

* Add Mac as development environment

## 0.0.17 - 2018-06-23

### Added

* Add lua-5.4.0-work2 dependency source code
* Add lpeg-1.0.1 dependency source code

### Changed

* Scons scripts to build all dependencies

## 0.0.16 - 2018-06-05

### Added

* Add initial code for luascript syntax highlighter

## 0.0.15 - 2018-05-27

### Added

* Add missing multi-line strings delimiter

## 0.0.14 - 2018-05-20

### Added

* Add product feature list to base the stories backlog

## 0.0.12 - 2018-05-19

### Added

* Add simple how to for how to build Godot with LuaScript support

## 0.0.11 - 2018-05-18

### Added

* Add missing new keyword 'undef' from Lua 5.4
* Add missing copyright header from Godot project to .clang-format file

### Fixed

* Fix some missing 'types of changes' in this CHANGE file

## 0.0.10 - 2018-05-14

### Added

* Add Lua 5.4 implementation support via SCons command line opion 'lua_home'

### Changed

* Change Lua init/destroy from constructor/destructor to ScriptLanguage lifecycle hooks

### Fixed

* Fix some error msg after template creation

## 0.0.9 - 2018-05-13

### Changed

* Refectoring for script load

### Fixed

* Fix print_debug macro when not debugging
* Fix comments

## 0.0.8 - 2018-05-12

### Added

* Add LuaScriptLanguage singlenton
* Add placeholder support
* Add lots of debug logging
* Add vscode ignore

## 0.0.7 - 2018-05-09

### Added

* Add constants for some of the virtual methods from Godot API
* Add more debug print information

## 0.0.6 - 2018-05-07

### Added

* Add syncronization support to LuaScriptLanguage
* Add some missing field members

## 0.0.5 - 2018-05-06

### Added

* Add debug helper functions

## 0.0.4 - 2018-05-03

### Added

* Add source code loading

## 0.0.3 - 2018-05-01

### Added

* Add debug prints + instantiation for all main classes so Godot doesn't crash

### Changed

* Make LuaScriptLanguage a singleton

## 0.0.2 - 2018-04-29

### Added

* Add basic implementation enough to run the engine.
* Add clang format compatible with Godot source code.
* Add intial (buggy) support for resource load and saving.

## 0.0.1 - 2018-04-28

### Added

* Add this CHANGELOG file.
* Add initial boilerplate code for a basic module.
* Add declarations for all virtual member functions for the minimun (I think)
  required for the engine to recognize Lua as an available language.
