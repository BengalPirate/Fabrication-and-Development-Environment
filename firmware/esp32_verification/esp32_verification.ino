/*
 * ============================================================================
 *  ESP32 Verification Sketch  --  Milestone 1
 * ============================================================================
 *  Course project : Annin Robotics AR4 Robotic Arm
 *  Team           : (TEAM NAME HERE)
 *  Team members   : Brandon Newton  (Embedded Programming)
 *                   Andrew Overton  (Mechanical Assembly & Fabrication)
 *                   Roshan Padhan   (Electronics & Wiring)
 *  Board          : ESP32 Dev Module (e.g. ESP32-WROOM-32 DevKit)
 *  Purpose        : Basic hardware bring-up test for Milestone 1.
 *                   Confirms the toolchain can COMPILE + UPLOAD to the ESP32,
 *                   produces a VISIBLE output (blinking LED), and PRINTS a
 *                   message to the Serial Monitor once per second.
 *
 *  How to run:
 *    1. Tools > Board  -> "ESP32 Dev Module"
 *    2. Tools > Port   -> select the ESP32's serial port
 *    3. Upload, then open Serial Monitor at 115200 baud.
 *
 *  Expected result:
 *    - On-board LED blinks at 1 Hz (0.5 s on, 0.5 s off).
 *    - Serial Monitor prints a heartbeat line every second.
 * ============================================================================
 */

// ---------------------------------------------------------------------------
// SECTION 1: Configuration constants
// ---------------------------------------------------------------------------
// Many ESP32 dev boards route the on-board LED to GPIO 2. If your board's LED
// does not blink, change LED_PIN to match your board (common alternates: 2, 5,
// 13). LED_BUILTIN is also defined on most ESP32 cores.
const int  LED_PIN      = 2;        // On-board LED GPIO
const long SERIAL_BAUD  = 115200;   // Serial Monitor baud rate
const int  BLINK_MS     = 500;      // Half-period of the blink, milliseconds

// A simple counter so we can see the loop running over time in the monitor.
unsigned long heartbeat = 0;

// ---------------------------------------------------------------------------
// SECTION 2: setup() -- runs once at power-up / after upload
// ---------------------------------------------------------------------------
// Initializes the serial link and the LED output pin, and prints a one-time
// banner identifying the team and the test.
void setup() {
  Serial.begin(SERIAL_BAUD);
  pinMode(LED_PIN, OUTPUT);

  delay(500);                       // Give the Serial Monitor time to attach.
  Serial.println();
  Serial.println("============================================");
  Serial.println(" AR4 Project - ESP32 Verification (Milestone 1)");
  Serial.println(" Team members: Brandon Newton, Andrew Overton, Roshan Padhan");
  Serial.println(" Status: ESP32 online. Beginning blink + serial test...");
  Serial.println("============================================");
}

// ---------------------------------------------------------------------------
// SECTION 3: loop() -- runs repeatedly forever
// ---------------------------------------------------------------------------
// Toggles the LED on and off to give a visible output, and prints a heartbeat
// message to the Serial Monitor so communication can be measured/confirmed.
void loop() {
  digitalWrite(LED_PIN, HIGH);      // LED ON  (visible output)
  Serial.print("Heartbeat ");
  Serial.print(heartbeat);
  Serial.println("  ->  LED ON");
  delay(BLINK_MS);

  digitalWrite(LED_PIN, LOW);       // LED OFF
  Serial.print("Heartbeat ");
  Serial.print(heartbeat);
  Serial.println("  ->  LED OFF");
  delay(BLINK_MS);

  heartbeat++;                      // Advance the counter each full cycle.
}
