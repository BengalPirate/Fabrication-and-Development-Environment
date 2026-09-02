# Software Setup Summary — Development Environment

This document summarizes the development environment each team member installs and
verifies for the AR4 project. Add a screenshot of each tool open/working to
`docs/report/` and reference it in the final report.

> **How to verify each tool:** open it, confirm the version, and (where noted) run
> the quick check. Capture a screenshot showing the tool open and operating.

## Required software

| # | Tool | Purpose in this project | How to verify | Version check |
| - | --- | --- | --- | --- |
| 1 | **Visual Studio Code** | Primary code editor for firmware, Python, and docs | Opens; install extensions (Python, PlatformIO or Arduino, C/C++) | Help → About |
| 2 | **Arduino IDE** | Compile & upload ESP32 firmware; Serial Monitor | Opens; ESP32 board appears in Boards list | Arduino IDE → About |
| 3 | **Python 3** | Sensors/computer vision, AR4 PC-side control software | `python3 --version` | ≥ 3.10 recommended |
| 4 | **Git** | Version control; shared repository | `git --version`; clone the repo | any recent |
| 5 | **ESP32 board support + drivers** | Adds ESP32 boards to Arduino IDE; USB‑serial driver so the PC sees the board | Board selectable; port appears when board plugged in | Boards Manager "esp32" |
| 6 | **AR4 software / project files** | Annin Robotics AR4 control software and firmware/CAD project files | Downloaded from Annin Robotics; control app launches | see fabrication checklist |
| 7 | **Slicer / fab-file software** | Open & prepare AR4 fabrication files (STL → print) | Slicer opens an AR4 STL and shows the model | e.g. Cura / PrusaSlicer / Bambu Studio |

## Installation notes

### 1. Visual Studio Code
- Download from https://code.visualstudio.com/
- Recommended extensions: **Python**, **C/C++**, and either **Arduino** or **PlatformIO IDE**.

### 2. Arduino IDE + ESP32 board support
- Download the Arduino IDE from https://www.arduino.cc/en/software
- **Add ESP32 support:** File → Preferences → *Additional Boards Manager URLs*, add:
  `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
- Then Tools → Board → Boards Manager → search **esp32** → install (Espressif Systems).
- **USB driver:** most ESP32 DevKits use a **CP2102** or **CH340** USB‑serial chip.
  If no port shows up when the board is plugged in, install the matching driver
  (Silicon Labs CP210x, or WCH CH340). On macOS you may need to allow the driver
  in *System Settings → Privacy & Security*.
- Select **Tools → Board → ESP32 Dev Module**, pick the **Port**, upload at 115200 baud.

### 3. Python 3
- macOS: `brew install python3` or download from https://www.python.org/downloads/
- Verify: `python3 --version` and `pip3 --version`.
- Create a virtual environment for project code: `python3 -m venv .venv`.

### 4. Git
- macOS: comes with Xcode Command Line Tools (`xcode-select --install`) or `brew install git`.
- Verify: `git --version`. Configure name/email, then clone the team repo.

### 5. AR4 software and project files
- Obtain from **Annin Robotics** (annin.com) — the AR4 control software, firmware,
  and CAD/fabrication files (STL/STEP/drawings). Record the exact versions used.
- _(Fill in the version/paths your team downloaded here.)_

### 6. Slicing / fabrication-file software
- Install a slicer to open the AR4 printable (STL) files: **Ultimaker Cura**,
  **PrusaSlicer**, or **Bambu Studio** (match to the printer the team will use).
- For CAD (STEP) files, a viewer such as **FreeCAD** or the browser‑based Autodesk
  viewer can open them.

## Verification checklist (screenshots to capture)

- [ ] VS Code open with the project folder
- [ ] Arduino IDE open, ESP32 board + port selected
- [ ] `python3 --version` output in a terminal
- [ ] `git --version` and a successful `git clone`/`git log`
- [ ] ESP32 sketch **compiled** (green "Done compiling")
- [ ] ESP32 sketch **uploaded** + **Serial Monitor** showing the heartbeat message
- [ ] AR4 fabrication file open in the slicer/CAD viewer
