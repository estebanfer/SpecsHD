# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## Unreleased

## [0.0.3] - 2022-06-21

### Changed

- Broke up UI into various tabs
  - Debug Overlays in `Debug` tab
  - Spawning in `Spawn` tab
- Completely redid dx hooking / imgui setup which now handles fullscreen/resolution changes/late loading
- Re-did local injector to work as both 32-bit and 64-bit which simplifies development.

### Added

- `Players` tab with ability to set health/bombs/ropes and items for each player
- `Levels` tab with ability to jump to a level
- `Audio` tab with ability to play audio effects

## [0.0.2] - 2022-06-20

### Added

- Ability to spawn entities
- Ability to teleport (Right Click)
- Pacifist Overlay
- Hitboxes

### Changed

- Updated names for some entity lists to be more descriptive

## [0.0.1] - 2022-06-19

### Added

Initial release that contains the following:

- Drawing Grid Outlines
- Drawing Bin Borders
- Drawing Entity IDs from various Entity arrays
- Excluding specific Entity IDs from being drawn.