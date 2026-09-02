# AR4 MK4 — Preliminary Fabrication & Parts Checklist

**Robot:** Annin Robotics **AR4 MK4** (6‑axis)
**Prepared for:** Milestone 1 fabrication review
**Status:** Preliminary — verify quantities/specs against the official AR4 MK4 Build
Manual PDF and the StepperOnline electric-package listing before ordering.

> **Do not begin printing or powered assembly without instructor authorization.**

---

## 1. Major mechanical components (primary structure)

The AR4's load-bearing structure is **machined aluminum**, not printed.

| Item | Detail | Source |
| --- | --- | --- |
| Aluminum parts kit | **26 machined aluminum pieces** — the links/housings for J1–J6 | Purchased (Annin "Aluminum Parts Kit") |
| Joint bearings | Angular-contact / taper / thrust / needle bearings at each joint (see §3) | Purchased (hardware kit) |
| Timing belts & pulleys | Belt-driven joints (MK3/4 use **HTD-series** belts on the belt-driven axes) | Purchased (hardware kit) |
| Fasteners & shafts | Metric machine/set screws, dowel pins, precision shafts | Purchased (hardware kit) |
| End effector (optional) | Servo gripper **or** pneumatic gripper | Purchased (optional kit) |

## 2. Components that must be 3D printed

Printed parts are **covers, enclosure panels, spacers, and switch/sensor mounts** —
secondary/protective, not the primary structure.

| Item | Notes |
| --- | --- |
| Base enclosure / panels | Houses electronics in the base |
| Guards / covers | Protective covers over joints |
| Homing-switch & sensor mounts | Mounts for limit switches |
| Spacers / small brackets | Misc. printed hardware |

- **File format:** **STL** (free download from Annin's downloads page / GrabCAD / Thingiverse).
- **Material:** **PETG** recommended (Annin's own printed sets are PETG).
- **Print settings (Annin spec):** ~**5 perimeters/shells**, ~**25% infill**, supports where overhangs require.
- **Filament needed:** roughly **1 spool** for a full set.
- **Alternative:** a pre-printed set can be purchased if the team prefers not to print.
- ⚠️ Exact printed-part **count is approximate** (Annin does not publish a hard number) — confirm from the STL package.

## 3. Purchased mechanical & electronic components

### Bearings (from hardware kit / manual BOM)
- 30203 taper roller bearing (17×40×13.25 mm)
- 35×52×4 thrust bearing
- HK1612 needle roller (16×22×12 mm)
- B1616 needle roller
- TRD1625 thrust washers
- LM3UU linear bushings

### Motion hardware
- HTD timing belts + pulleys (belt-driven joints) — ⚠️ **verify exact belt pitch per joint** against the MK4 manual
- Precision shafts (e.g., 3 mm × 85 mm), dowel pins
- Metric fasteners / set screws
- **No harmonic or cycloidal drives** — reduction is via motor planetary gearboxes + timing belts

## 4. Motors, drivers, sensors, and control hardware

### Motors — geared NEMA steppers with integrated magnetic encoders (closed-loop), from StepperOnline

| Joint | Motor (MK3/4-era SKU) | NEMA size | Gear ratio |
| --- | --- | --- | --- |
| J1 | 17HS15-1684D-EG10-AR4 | NEMA 17 | 10:1 |
| J2 | 23HS22-2804D-YGS50-AR4 | **NEMA 23** | 50:1 |
| J3 | 17HS15-1684D-EG50-AR4 | NEMA 17 | 50:1 |
| J4 | 11HS20-0674D-EGS16-AR4 | NEMA 11 | 16:1 |
| J5 | 17LS19-1684E-200G-AR4 (pancake) | NEMA 17 | belt / ~200-step |
| J6 | 14HS11-1004D-EGS20-AR4 | NEMA 14 | 20:1 |

- J2 is the only NEMA 23; J4 is NEMA 11, J6 is NEMA 14, the rest NEMA 17.
- ⚠️ Per-joint **holding torque** not published by Annin — verify against StepperOnline datasheets if needed.

### Stepper drivers (6 total, one per joint) — StepperOnline/Leadshine digital
- **DM332T ×3** — J1–J3 (larger motors)
- **DM320T ×3** — J4–J6 (smaller motors)
- ⚠️ **DIP-switch (microstepping) settings must match the firmware/software version** (MK3+ changed them) — common early error.

### Controller / electronics
- **Teensy 4.1** (600 MHz Cortex‑M7) — main motion controller
- **Arduino Nano** — 5 V peripherals (servo gripper, solenoid); in MK4 moved **inside the base enclosure**
- **ACS712 current sensor** — gripper over-current protection (added in MK4)
- **2×12 terminal board** in the base (MK4)
- **USB serial** to PC (Teensy → `/dev/ttyACM0`, Nano → `/dev/ttyUSB0` on Linux)

### Sensors
- **Integrated magnetic encoder** on each motor (closed-loop feedback to Teensy)
- **Mechanical limit switches** for homing per axis (**SV‑166‑1C25**; MK4 uses **KW12** for J5)
- ⚠️ Exact encoder IC in the MK4 motors not confirmed — verify from MK4 motor spec (legacy AR3 used external AS5600 boards).

### Power
- **24 VDC** supply, StepperOnline **LYD2409000** (24 V, ~9 A ≈ 216 W); robot max draw ~198 W
- Pneumatic gripper (if used) needs a **separate 24 VDC brick** + air supply

## 5. Software & fabrication project files

| File / software | Format | Opens with |
| --- | --- | --- |
| AR4 Control Software (`ar4-hmi`) | Windows exe / Python 3.11–3.12 source | Windows; or Python (tkinter, ttkbootstrap, pyserial, numpy, vtk) |
| Teensy firmware + Nano firmware | Arduino sketches | Arduino IDE (needs **Bounce2** library) |
| ROS 2 driver `ar4_ros_driver` | ROS 2 package | ROS 2 + MoveIt (supports MK1–MK4) |
| Printable parts | **STL** | Slicer (Cura / PrusaSlicer / Bambu Studio) |
| Full CAD assembly (optional add‑on) | **STEP / SOLIDWORKS** | Fusion 360 / FreeCAD / SolidWorks / Onshape |
| 2D profiles / drawings | **DXF / PDF** | CAD / PDF viewer |
| Build Manual | **PDF** | PDF viewer |

**Fabrication file to open for Milestone 1:** open an AR4 **STL** in a slicer (Cura
recommended by Annin) targeting PETG, ~5 perimeters, ~25% infill, and capture a
screenshot → place in `docs/report/`.

## 6. Parts currently unavailable / to procure (fill in for your team)

| Part | Status | Action |
| --- | --- | --- |
| Geared+encoder motor set | ⬜ on hand / ⬜ to order | **Order early — longest lead-time item** |
| Teensy 4.1 | ⬜ on hand / ⬜ to order | Check availability (industry-wide supply fluctuations) |
| Aluminum parts kit | ⬜ on hand / ⬜ to order | |
| Hardware kit (bearings/belts/fasteners) | ⬜ on hand / ⬜ to order | |
| 24 V power supply | ⬜ on hand / ⬜ to order | |
| PETG filament | ⬜ on hand / ⬜ to order | ~1 spool |
| Gripper (optional) | ⬜ on hand / ⬜ to order | servo or pneumatic |
| 3D printer access | ⬜ yes / ⬜ no | |

_(Update the boxes above with what your team actually has after inventory.)_

## 7. Anticipated fabrication / assembly problems

- **J2 backlash** — most-cited accuracy issue; play amplifies down the kinematic chain. Set J2 belt/gear tension carefully.
- **Fragile homing switches** — easy to break a limit switch; follow the homing/config order.
- **Wiring density** — 6 motors + 6 encoders + 6 limit switches + gripper crammed into the base. **Continuity-check every wire before power-up.**
- **PETG printing** — warping/adhesion and support removal on covers; PETG on glass bed works well. Watch tolerances on brackets around bearings/switches.
- **Belt tensioning** — belt-driven joints need correct tension for low backlash.
- **Mandatory calibration** — required after flashing firmware and after any Teensy power cycle; a frequent "won't move right" gotcha.
- **Driver DIP switches** — must match firmware/software version (MK3+).

## 8. Approximate cost (planning)

| Item | Approx. cost |
| --- | --- |
| Combo kit (aluminum + hardware + primary electrical incl. Teensy) | ~$1,189 |
| Motor/driver/PSU package (StepperOnline MK4/5) | ~$730 |
| PETG filament (or pre-printed set) | ~$25–100 |
| Gripper (optional) | +$75 servo / +$139 pneumatic |
| CAD models (optional) | +$99 |
| **All-in (typical from-kit build)** | **~$2,000** |

---

### Items to verify against primary MK4 docs
1. Per-joint **holding torque** (StepperOnline motor datasheets)
2. Exact **encoder IC** in MK4 motors (MK4 Build Manual / motor spec)
3. Exact **belt pitch per joint** on MK4 (MK4 Build Manual BOM)
4. Precise MK4 spec figures (reach, payload, repeatability) — current site serves MK5 numbers, essentially identical to MK4

### Reference links
- Annin Robotics: https://anninrobotics.com/ (robot kits, downloads, FAQ)
- AR4 Build Manual (PDF): https://anninrobotics.com/wp-content/uploads/2025/11/AR4-MK3-Robot-Manual-1.6.pdf
- StepperOnline MK4/5 electric package: https://www.omc-stepperonline.com/upgraded-ar4-robot-complete-electric-package-ar4-mk4-5-stepper-motor-driver-and-power-supply-ar4-mk4-5
- Control software: https://github.com/Annin-Robotics/ar4-hmi
- ROS 2 driver: https://github.com/ycheng517/ar4_ros_driver
