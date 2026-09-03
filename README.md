# AR4 Robotic Arm — Fabrication and Development Environment

**Course project:** Build, program, and document an Annin Robotics **AR4 MK4** 6‑axis robotic arm.
**Milestone 1:** Fabrication and Development Environment.

Repository: https://github.com/BengalPirate/Fabrication-and-Development-Environment

---

## Team

**Team name:** Team 2

| Member | Preliminary responsibility |
| --- | --- |
| **Brandon Newton** | Embedded programming (ESP32 / controller firmware), sensors & computer vision, repository management |
| **Andrew Overton** | Mechanical assembly and fabrication (3D printing, machining, assembly) |
| **Roshan Padhan** | Electronics and wiring (motors, drivers, power, controller wiring) |

Responsibilities may be shared or reassigned as the project progresses. See
[`docs/team-responsibilities.md`](docs/team-responsibilities.md) for details.

---

## Repository structure

```
.
├── README.md                       # This file
├── firmware/
│   └── esp32_verification/         # Milestone 1 ESP32 test sketch (blink + serial)
│       └── esp32_verification.ino
├── src/                            # Future application / control code
├── vision/                         # Future computer-vision code
├── hardware/
│   └── ar4_fabrication_files/      # AR4 CAD / STL / drawings (or links to them)
├── tests/                          # Test programs and verification scripts
└── docs/
    ├── team-responsibilities.md    # Roles & project-readiness plan
    ├── software-setup-summary.md   # Dev-environment install & verification notes
    ├── ar4-fabrication-checklist.md# Parts / fabrication checklist
    └── report/                     # Milestone report + screenshots
```

---

## Milestone 1 deliverables — status

- [x] Shared repository created and organized
- [x] Team members and preliminary responsibilities documented
- [x] ESP32 verification code (`firmware/esp32_verification/`)
- [x] Software‑setup summary (`docs/software-setup-summary.md`)
- [x] Preliminary AR4 fabrication & parts checklist (`docs/ar4-fabrication-checklist.md`)
- [x] Development‑environment verification **screenshots** (`docs/report/`)
- [x] ESP32 test run **screenshot** (upload success + Serial Monitor heartbeat)
- [x] Screenshot of an opened AR4 fabrication file (Bambu Studio)
- [x] Instructor added as a collaborator on the repo
- [ ] Final PDF report exported and submitted

---

## Quick start — ESP32 test

1. Install the Arduino IDE and the **ESP32 board support** package
   (Boards Manager → "esp32" by Espressif). See the setup summary for details.
2. Open `firmware/esp32_verification/esp32_verification.ino`.
3. **Tools → Board →** _ESP32 Dev Module_; **Tools → Port →** your board's port.
4. Click **Upload**, then open **Serial Monitor** at **115200 baud**.
5. Expected: on‑board LED blinks at 1 Hz and a heartbeat message prints each second.
