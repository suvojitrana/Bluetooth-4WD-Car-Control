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

> Use any Bluetooth terminal app (like [Bluetooth Terminal HC-05](https://play.google.com/store/apps/details?id=project.bluetoothterminal)) to send these commands.

---

## 🔌 Circuit Diagram:
[Circuit Diagram](https://github.com/suvojitrana/Bluetooth-4WD-Car-Control/blob/main/circuit_diagram.jpg?raw=true)

---

## 📁 File Info:
- `bluetooth_4wd_car_control.ino` → Main Arduino sketch  
- `.gitignore` → To ignore temporary files  
- `LICENSE` → MIT License  

---

## 🧠 Future Scope:
- Obstacle avoidance with ultrasonic sensor
- Line following mode
- Mobile app with GUI

---

## 📃 License:
This project is licensed under the **MIT License** – feel free to use, modify, and distribute.

---

**Made with ❤️ by Suvojit Rana**
