# ESP32 I2C LCD Interface

This project demonstrates how to interface a 16x2 LCD with ESP32 using the I2C protocol.
It includes scanning the I2C bus to detect connected devices and displaying text on the LCD.

## Objective
- Understand I2C communication
- Detect device address using I2C scanner
- Interface LCD with ESP32
- Display data on screen

## Hardware Used
- ESP32 Development Board
- 16x2 I2C LCD (PCF8574 module)
- Jumper Wires

## Connections
LCD VCC → ESP32 3.3V  
LCD GND → ESP32 GND  
LCD SDA → GPIO21  
LCD SCL → GPIO22  

## Features
- Automatic I2C device detection
- LCD initialization
- Text display
- Stable communication

## Learnings
- I2C protocol basics
- SDA and SCL signaling
- Address scanning
- Pull-up resistor concept
- Embedded debugging

## How to Run
1. Open the project in Arduino IDE or Wokwi.
2. Install required libraries.
3. Upload the code to ESP32.
4. Observe output on LCD.

## Output
The LCD displays a test message after successful initialization.

## Author
Vrushank Patil
