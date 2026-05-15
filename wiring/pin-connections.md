# ASTRA-1 Wiring Connections

## ESP32 Connections

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
- VCC → 5V
- GND → GND
- CS → GPIO5
- SCK → GPIO18
- MISO → GPIO19
- MOSI → GPIO23

### OLED Display
- VCC → 3.3V
- GND → GND
- SDA → GPIO21
- SCL → GPIO22

## Power System
- LiPo Battery → AMS1117 Module
- AMS1117 Output → ESP32 VIN
