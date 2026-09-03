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
- [x] Final PDF report exported ([`docs/report/Milestone1_Fabrication_and_Development_Environment.pdf`](docs/report/Milestone1_Fabrication_and_Development_Environment.pdf))

---

## Quick start — ESP32 test

1. Install the Arduino IDE and the **ESP32 board support** package
   (Boards Manager → "esp32" by Espressif). See the setup summary for details.
2. Open `firmware/esp32_verification/esp32_verification.ino`.
3. **Tools → Board →** _ESP32 Dev Module_; **Tools → Port →** your board's port.
4. Click **Upload**, then open **Serial Monitor** at **115200 baud**.
5. Expected: on‑board LED blinks at 1 Hz and a heartbeat message prints each second.

---

## Milestone 1 — Verification screenshots

Full report: [`docs/report/Milestone1_Fabrication_and_Development_Environment.pdf`](docs/report/Milestone1_Fabrication_and_Development_Environment.pdf)
· source: [`docs/report/milestone1-report.md`](docs/report/milestone1-report.md)

**Fig. A‑1 — Visual Studio Code open with the project folder**

![VS Code with the project open](docs/report/figA9-vscode.png)

**Fig. A‑2 — Python and Git versions verified (`python --version` → 3.13.9; `git --version` → 2.50.1)**

![Python and Git versions](docs/report/figA10-python_and_git.png)

**Fig. A‑3 — AR4 STL parts opened and sliced in Bambu Studio (fabrication file)**

![AR4 parts in Bambu Studio](docs/report/figA11-slicer.png)

**Fig. A‑4 — ESP32 verification sketch compiled and uploaded successfully (Arduino IDE)**

![ESP32 upload success](docs/report/figA7-upload.png)

**Fig. A‑5 — Serial Monitor output at 115200 baud (LED-blink heartbeat)**

![Serial Monitor heartbeat](docs/report/figA8-serial.png)

**Fig. A‑6 — AR4 control software (Ver 6.4.1) installed and launched on the PC**

![AR4 control software interface](docs/report/figA12-interface.png)
