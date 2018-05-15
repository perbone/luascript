# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [Unreleased]

## 0.0.10 - 2018-05-14
### Added
- Add Lua 5.4 implementation support via SCons command line opion 'lua_home'

## 0.0.9 - 2018-05-13
### Added
- Refectoring for script load
- Fix print_debug macron when not debugging
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
- Make LuaScriptLanguage a singleton

## 0.0.2 - 2018-04-29
### Added
- Add basic implementation enough to run the engine.
- Add clang format compatible with Godot source code.
- Add intial (buggy) support for resource load and saving.

## 0.0.1 - 2018-04-28
### Added
- This CHANGELOG file.
- Initial boilerplate code for a basic module.
- Add declarations for all virtual member functions for the minimun (I think)
  required for the engine to recognize Lua as an available language.