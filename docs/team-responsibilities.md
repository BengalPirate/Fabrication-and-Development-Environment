# Team Responsibilities & Project-Readiness Plan

**Project:** Annin Robotics AR4 6‑axis robotic arm
**Team name:** Team 2

## Members and preliminary responsibilities

| Member | Primary area | Scope of responsibility |
| --- | --- | --- |
| **Brandon Newton** | Embedded programming | Controller firmware, ESP32/Teensy code, serial communication, motion/control software; also **sensors & computer vision** and **repository/documentation management**. |
| **Andrew Overton** | Mechanical assembly & fabrication | 3D printing of AR4 parts, print preparation/slicing, hardware assembly, mechanical tolerancing and fit, belt/pulley/bearing installation. |
| **Roshan Padhan** | Electronics & wiring | Stepper drivers, motor wiring, power distribution, limit switches/encoders wiring, controller harness, electrical safety checks. |

> Responsibilities may be **shared or changed** as the project progresses. Areas
> such as sensors/computer vision and documentation are cross-cutting and will be
> supported by the whole team.

## Cross-cutting ownership

| Area | Lead | Support |
| --- | --- | --- |
| Sensors & computer vision | Brandon | Roshan (sensor wiring) |
| Documentation & repository management | Brandon | All |
| Bill of materials & procurement | Roshan | Andrew |
| Fabrication scheduling (print queue) | Andrew | — |

## Project-readiness plan (next steps after Milestone 1)

1. **Confirm parts & BOM** — cross-check the AR4 bill of materials against parts
   on hand; place orders for anything missing or long‑lead (see
   [`ar4-fabrication-checklist.md`](ar4-fabrication-checklist.md)).
2. **Toolchain lock-in** — everyone installs and verifies the dev environment
   (VS Code, Arduino IDE, Python 3, Git, ESP32 support, AR4 software, slicer).
3. **Print plan** — Andrew queues 3D-printed parts once authorized; track print
   time, material, and failures.
4. **Wiring plan** — Roshan drafts the wiring/power diagram before powered assembly.
5. **Firmware plan** — Brandon stands up the controller firmware and PC-side
   control software; ESP32 test is the first checkpoint.
6. **Weekly sync** — short standup to update the repo checklist and re-balance work.

## Communication / workflow

- All code and documentation live in the shared GitHub repository.
- Instructor will be added as a collaborator for access.
- Use branches + pull requests for non-trivial changes; keep `main` buildable.
