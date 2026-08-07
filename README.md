# Fontmatrix Qt5 Fork

This is a `fontmatrix` fork focused on keeping the project buildable with Qt5 and extending it so it can work as a font collection viewer, not only as a viewer for fonts installed in the operating system.

This fork currently builds on Linux and already includes a folder-based collection mode.

## Current status

- Builds with `cmake` and Qt5.
- Preserves the traditional system font browsing workflow.
- Can open a folder as a font collection.
- Can return to the full catalog with `File > Show All Fonts`.
- Has an explicit `File > Close Collection` action (shortcut **Ctrl+W**).
- Remembers the last opened collection.
- Can reload the current collection.
- Shows the full active collection path in the status bar.
- Stores recent collections in `File > Recent Collections`.
- Provides `File > Quick Collections` with one-click access to:
  - `~/.fonts` (if present)
  - `~/.local/share/fonts` (if present)
  - Auto-detected common folders such as `album-fuentes/fuentes-extraidas`, `~/Fonts`, `~/fuentes`, and similar.
- Visual indicators for collection mode:
  - Window title shows the active collection name.
  - Status-bar catalog label is styled with a highlighted color.
- Prevents old imported fonts outside the active folder from leaking into collection mode.
- Database layer exposes both `AllFontNames()` (global catalog) and `VisibleFontNames()` (collection-filtered subset).

Functional details and pending work are tracked in [ROADMAP.md](./ROADMAP.md).

## Required dependencies

These are the dependencies required for the base build that has already been verified in this fork on Debian/Ubuntu and derivatives:

For Debian 12

```bash
sudo apt update
sudo apt install -y \
  build-essential \
  cmake \
  pkg-config \
  qtbase5-dev \
  qttools5-dev \
  qttools5-dev-tools \
  libqt5svg5-dev \
  libqt5webkit5-dev \
  libqt5sql5-sqlite \
  libfreetype6-dev \
  libfontconfig1-dev
```

For Debian 13

```
sudo apt install -y \
  build-essential \
  cmake \
  pkg-config \
  qtbase5-dev \
  qttools5-dev \
  qttools5-dev-tools \
  libqt5svg5-dev \
  qtwebengine5-dev \
  libqt5sql5-sqlite \
  libqt5webenginewidgets5 \
  libfreetype-dev \
  libfontconfig1-dev 2>&1 | tail -30
```

Notes:

- `Qt5WebKitWidgets` is required by the current codebase.
- `libqt5sql5-sqlite` is important because Fontmatrix uses an SQLite database internally.
- `harfbuzz` and `hyphenate` do not need to be installed separately for the verified base build, because they are already vendored in this tree.

## Optional dependencies

These are not required for the verified base build, but the current `CMakeLists.txt` still contains optional support for them:

- `PythonLibs` if `-DWANT_PYTHONQT=true` is enabled
- `ICU` if `-DWANT_ICU=true` is enabled
- `M17N` if `-DWANT_M17N=true` is enabled
- `PoDoFo` if `-DWANT_PODOFO=true` is enabled

This fork does not currently document a recently verified build for those optional features, so they should only be enabled when specifically needed for development work.

## Build

Minimum verified build:

```bash
cmake -S . -B build
cmake --build build -j4
```

The binary is generated at:

```bash
build/src/fontmatrix
```

To install locally:

```bash
sudo cmake --install build
```

The current default install prefix is `/usr/local`.

## Run

From the build tree:

```bash
./build/src/fontmatrix
```

## Recommended workflow

1. Install dependencies.
2. Configure with `cmake -S . -B build`.
3. Build with `cmake --build build -j4`.
4. Test both the system-font workflow and the collection workflow manually.
5. Review [ROADMAP.md](./ROADMAP.md) before continuing new work.

## Manual workflow that should be tested

Whenever collection mode is changed, at minimum test the following:

1. Open Fontmatrix showing system fonts.
2. Go to `File > Open Font Collection...`.
3. Select a folder containing `.ttf`, `.otf`, or `.pfb` files.
4. Verify that only fonts from that folder are shown.
5. Verify that the window title and the status-bar catalog label show the active collection.
6. Verify that `File > Close Collection` (or **Ctrl+W**) returns to the global catalog.
7. Verify that `File > Reload Current Collection` still works.
8. Verify that `File > Recent Collections` reopens the folder correctly.
9. Verify that `File > Show All Fonts` returns to the global catalog.
10. Verify that `File > Quick Collections` shows available entries such as `~/.fonts` or `~/.local/share/fonts` when those folders exist.
11. Close and reopen the application and confirm that the last collection is restored.

## Key files for continuing development

- `CMakeLists.txt`: top-level project configuration.
- `src/CMakeLists.txt`: sources, UI files, MOC setup, and executable linking.
- `src/typotek.cpp` and `src/typotek.h`: main window, menu actions, and overall collection-mode state.
- `src/fmfontdb.cpp` and `src/fmfontdb.h`: internal database and visible-font filtering.
- `src/mainviewwidget.cpp` and `src/mainviewwidget.h`: main view refresh and font selection behavior.
- `ROADMAP.md`: actual fork status and next steps.

## Changes already introduced in this fork

The main changes made during this development stage are concentrated in:

- `src/typotek.cpp`
- `src/typotek.h`
- `src/fmfontdb.cpp`
- `src/fmfontdb.h`
- `src/mainviewwidget.cpp`
- `src/mainviewwidget.h`

In summary, this fork already implements support for:

- opening folders as collections,
- switching between collection mode and the global catalog,
- explicitly closing a collection via `File > Close Collection` (**Ctrl+W**),
- remembering the last collection,
- reloading collections,
- showing the active path in the status bar,
- handling recent collections via `File > Recent Collections`,
- one-click opening of common folders via `File > Quick Collections` (including `~/.fonts`, `~/.local/share/fonts`, and auto-detected user font folders),
- visual collection-mode indicators (window title and highlighted status-bar label),
- correctly restricting the visible subset of fonts,
- and exposing both global (`AllFontNames()`) and collection-filtered (`VisibleFontNames()`) APIs in the database layer.

## Important caveats

- The project still carries many build warnings inherited from the historical codebase and from old Qt APIs.
- A successful build does not mean that every legacy feature has already been fully reviewed under the new collection mode.
- If filters, family views, export features, or font reload behavior are changed, check carefully that they do not accidentally fall back to the global catalog when they should use the visible subset.
- The repository still contains legacy files such as `README` and `INSTALL` from the original project. This `README.md` documents the practical current state of this fork.

## Suggested next improvements

The following priority items are still pending at the time of writing:

- allow opening several collections at once and switching between them,
- add a dialog or banner explaining that the current filter is folder-based,
- add an option to open a collection non-recursively,
- add an option to open only certain formats (`.ttf`, `.otf`, `.pfb`) within a collection,
- review secondary operations that may still depend on the global catalog (font reload, font-book export),
- document more complete manual test procedures,
- and, if the project matures further, introduce automated tests.
