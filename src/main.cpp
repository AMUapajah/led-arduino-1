#include <Arduino.h>

// Deklarasi pin LED
const int ledMerah = 8;
const int ledKuning = 9;
const int ledHijau = 10;

void setup() {
  // Mengatur pin-pin yang dihubungkan ke LED sebagai output
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
}

void loop() {
  // LED Merah
  // Menyalakan LED Merah selama 2 detik, kemudian mematikannya.
  digitalWrite(ledMerah, HIGH);
  delay(2000);
  digitalWrite(ledMerah, LOW);

  // LED Kuning
  // Menyalakan LED Kuning selama 2 detik, kemudian mematikannya.
  digitalWrite(ledKuning, HIGH);
  delay(2000);
  digitalWrite(ledKuning, LOW);

  // LED Hijau
  // Menyalakan LED Hijau selama 2 detik, kemudian mematikannya.
  digitalWrite(ledHijau, HIGH);
  delay(2000);
  digitalWrite(ledHijau, LOW);
}