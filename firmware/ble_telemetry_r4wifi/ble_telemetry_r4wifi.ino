// Week 1: Serial Hello (UNO R4 WiFi)
// Goal: confirm toolchain, board selection, upload, and logging.

unsigned long lastPrintMs = 0;
unsigned long counter = 0;

void setup() {
  Serial.begin(115200);

  // Some boards need a moment for Serial to come up.
  delay(1000);

  Serial.println("=== BLE Telemetry R4 WiFi ===");
  Serial.println("Week 1: Serial logging is working.");
}

void loop() {
  const unsigned long now = millis();

  // Print once per second
  if (now - lastPrintMs >= 1000) {
    lastPrintMs = now;
    counter++;

    Serial.print("uptime_ms=");
    Serial.print(now);
    Serial.print("  counter=");
    Serial.println(counter);
  }
}
