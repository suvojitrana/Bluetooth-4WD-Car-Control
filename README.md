![Project Banner](https://github.com/suvojitrana/Bluetooth-4WD-Car-Control/blob/main/project_banner.jpg?raw=true)

# 🚗 Bluetooth-4WD-Car-Control

An Arduino-based 4WD robot car that can be controlled via Bluetooth using the **HC-05** module. Ideal for beginners and hobbyists learning robotics and wireless control.

---

## 🔧 Components Used:
- Arduino Uno 
- HC-05 Bluetooth Module
- L293D Motor Driver Shield Module
- 4 DC Geared Motors (with wheels)
- 4WD Chassis Kit
- Power Supply (Battery Pack)

---

## 📲 Features:
- 📡 Wireless control using Bluetooth
- ↕️ Move forward and backward
- ⬅️ Turn left and right
- ⛔ Stop command
- 💻 Supports serial monitor and mobile app control

---

## 🚀 How It Works:
Send single-character commands to the Arduino via a Bluetooth app or serial monitor:

| Command | Action      |
|---------|-------------|
| F       | Forward     |
| B       | Backward    |
| L       | Left        |
| R       | Right       |
| S       | Stop        |

> Use any Bluetooth terminal app (like [Bluetooth Terminal HC-05](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal)) to send these commands.

---

## 🔌 Circuit Diagram:
[Circuit Diagram](https://github.com/suvojitrana/Bluetooth-4WD-Car-Control/blob/main/circuit_diagram.jpg?raw=true)

---

## ⬆️ How to Upload the Code

1. Connect your Arduino Uno to PC via USB.
2. Open `bluetooth_4wd_car_control.ino` in Arduino IDE.
3. Select the correct board and port.
4. Upload the code.
5. Connect HC-05 to Arduino (RX to TX, TX to RX).
6. Power the motor driver with an external battery.

---

## 🧠 Code Explanation

The main code file is `bluetooth_4wd_car_control.ino`.  
It follows these key steps:

- Initializes Bluetooth and motor pins
- Reads serial data from the HC-05 module
- Based on the received character, turns ON/OFF specific motors:
  - `F`: All motors forward
  - `B`: All motors backward
  - `L`: Left motors stop, right motors forward (for turning)
  - `R`: Right motors stop, left motors forward
  - `S`: All motors stop

---

## ✌️ Future Scope:
- Obstacle avoidance with ultrasonic sensor
- Line following mode
- Mobile app with GUI

---

## 📃 License:
This project is licensed under the **MIT License** – feel free to use, modify, and distribute.

---

**Made with 😎 by Suvojit Rana**
