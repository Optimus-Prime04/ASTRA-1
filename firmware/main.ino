#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_BMP280.h>

Adafruit_MPU6050 mpu;
Adafruit_BMP280 bmp;

const int chipSelect = 5;

File dataFile;

void setup() {
  Serial.begin(115200);

  Wire.begin();

  if (!mpu.begin()) {
    Serial.println("MPU6050 not detected");
    while (1);
  }

  if (!bmp.begin(0x76)) {
    Serial.println("BMP280 not detected");
    while (1);
  }

  if (!SD.begin(chipSelect)) {
    Serial.println("SD card failed");
    while (1);
  }

  Serial.println("ASTRA-1 Flight Computer Initialized");
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  float altitude = bmp.readAltitude(1013.25);

  dataFile = SD.open("flight.txt", FILE_APPEND);

  if (dataFile) {
    dataFile.print("Accel X: ");
    dataFile.print(a.acceleration.x);
    dataFile.print(", Accel Y: ");
    dataFile.print(a.acceleration.y);
    dataFile.print(", Accel Z: ");
    dataFile.print(a.acceleration.z);
    dataFile.print(", Altitude: ");
    dataFile.println(altitude);
    dataFile.close();
  }

  Serial.print("Altitude: ");
  Serial.println(altitude);

  delay(1000);
}
