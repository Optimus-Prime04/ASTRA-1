# ASTRA-1 🚀

ASTRA-1 is a student-built autonomous rocket flight computer made for aerospace experimentation and telemetry testing.

This project uses an ESP32 with onboard sensors to measure altitude, acceleration, and movement during flight simulations. The system can display live telemetry data and store flight logs on an SD card for later analysis.

I started this project because I wanted to learn more about aerospace avionics systems and how real flight computers work. Instead of only learning theory, I wanted to build a working embedded system myself and understand how sensors, telemetry, and flight logic are integrated together.

---

# Features

- Altitude sensing using BMP280/BME280
- Motion and acceleration sensing using MPU6050
- Launch detection logic
- SD card flight-data logging
- ESP32-based embedded system
- Modular stacked hardware setup
- USB powered development mode

---

# Hardware Used

- ESP32 Dev Board
- MPU6050 IMU Sensor
- BMP280/BME280 Sensor
- SD Card Module
- AMS1117 3.3V Module
- Jumper wires
- LiPo batteries
- M3 standoffs and screws

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
assets/
```

---

# Build Guide

## Step 1 — Assemble the Frame

- Print or manufacture the CAD frame plates.
- Use M3 standoffs and screws to assemble the stacked structure.
- Install the electronics layer-by-layer.

## Step 2 — Connect Electronics

Use the wiring diagram inside:

```txt
wiring/
```

Main sensor wiring:

### MPU6050
- VCC → 3.3V
- GND → GND
- SDA → GPIO21
- SCL → GPIO22

### BMP280
- VCC → 3.3V
- GND → GND
- SDA → GPIO21
- SCL → GPIO22

### SD Card Module
- CS → GPIO5
- SCK → GPIO18
- MISO → GPIO19
- MOSI → GPIO23

---

# Firmware Setup

## Install Arduino IDE

Download Arduino IDE and install ESP32 board support.

## Required Libraries

Install:

- Adafruit MPU6050
- Adafruit BMP280
- SPI
- SD
- Wire

Library list is included inside:

```txt
firmware/libraries.txt
```

---

# Flashing Instructions

1. Connect ESP32 to laptop using USB-C.
2. Open:

```txt
firmware/main.ino
```

3. Select ESP32 board.
4. Select correct COM port.
5. Upload firmware.
6. Open Serial Monitor at:

```txt
115200 baud
```

---

# How It Works

The ESP32 reads telemetry data from the MPU6050 and BMP280 sensors using I2C communication.

The system:

- measures acceleration
- measures altitude
- logs flight data
- stores telemetry on microSD card
- outputs live serial telemetry

---

# CAD and Mechanical Design

CAD files and renders are inside:

```txt
cad/
```

This includes:

- STEP exports
- Fusion source files
- rendered views
- assembly structure

---

# BOM

Complete Bill of Materials:

```txt
bom/BOM.csv
```

Includes:

- quantities
- estimated prices
- purchase links

---

# Documentation

Additional documentation:

```txt
docs/
```

Includes:

- safety notes
- repository layout
- build documentation

---

# Devlogs

Development logs and progress tracking:

```txt
devlogs/
```

---

# Why I Made This

I wanted to create a low-cost student aerospace project that combines electronics, programming, embedded systems, and CAD design into a real working avionics prototype.

This project is helping me learn:

- embedded systems
- avionics basics
- telemetry systems
- sensor integration
- firmware development
- aerospace engineering concepts

---

# Future Plans

- Custom PCB
- GPS integration
- Wireless telemetry
- Flight stabilization
- Real rocket flight testing
- Smaller avionics stack
