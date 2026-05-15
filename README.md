# ASTRA-1 🚀

ASTRA-1 is a student-built autonomous rocket flight computer made for aerospace experimentation and telemetry testing.

This project uses an ESP32 with onboard sensors to measure altitude, acceleration, and movement during flight simulations. The system can display live telemetry data and store flight logs on an SD card for later analysis.

I started this project because I wanted to learn more about aerospace avionics systems and how real flight computers work. Instead of only learning theory, I wanted to build a working embedded system myself and understand how sensors, telemetry, and flight logic are integrated together.

---

# Features

- Altitude sensing using BMP280/BME280
- Motion and acceleration sensing using MPU6050
- Launch detection logic
- OLED telemetry display
- SD card flight-data logging
- ESP32-based embedded system
- Modular hardware setup

---

# Hardware Used

- ESP32 Dev Board
- MPU6050 IMU Sensor
- BMP280/BME280 Sensor
- OLED SSD1306 Display
- SD Card Module
- LEDs
- Buzzer
- Breadboard and jumper wires

---

# How It Works

The ESP32 reads data from the sensors using I2C communication. The altitude sensor measures pressure-based altitude while the MPU6050 tracks acceleration and movement.

The system processes this data and:
- displays telemetry on the OLED screen
- detects launch-like movement
- stores data onto the SD card

---

# Wiring Overview

## MPU6050
- SDA → GPIO21
- SCL → GPIO22

## BMP280/BME280
- SDA → GPIO21
- SCL → GPIO22

## OLED Display
- SDA → GPIO21
- SCL → GPIO22

## SD Card Module
- CS → GPIO5
- SCK → GPIO18
- MISO → GPIO19
- MOSI → GPIO23

---

# Why I Made This

I wanted to create a low-cost student aerospace project that combines electronics, programming, and embedded systems into a real working prototype.

This project is helping me learn:
- embedded programming
- avionics basics
- telemetry systems
- sensor integration
- hardware debugging
- aerospace engineering concepts

---

# Current Progress

- ESP32 simulation setup completed
- Sensor integration completed
- Telemetry display working
- SD card logging working
- Firmware testing in progress
- Planning PCB and enclosure design

---

# Future Plans

- Custom PCB
- Better launch detection
- GPS integration
- Wireless telemetry
- Compact avionics enclosure
- Real flight testing

---

# Repository Structure

```txt
firmware/
wiring/
schematics/
pcb/
cad/
bom/
docs/
devlogs/
media/
