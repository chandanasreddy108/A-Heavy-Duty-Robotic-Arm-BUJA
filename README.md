#BUJA – Heavy Duty Robotic Arm

<img width="1024" height="461" alt="image_20260723_0615292fa298cc-38a8-4643-83a0-4dd2cc819ac6-1" src="https://github.com/user-attachments/assets/76cea7ed-75f4-4b1d-b1a4-e848fd328bf2" />


A large-scale multi-axis robotic arm powered by **Arduino Mega** and high-torque servo motors for heavy-duty object manipulation and real-time manual control.

---

## Overview

BUJA is a **4-foot heavy-duty robotic arm** designed to perform pick-and-place operations using multiple high-torque servo motors. The arm is manually controlled through potentiometers, enabling intuitive and precise movement of each joint in real time.

The project demonstrates embedded systems, robotics, servo motor control, and mechanical system design while serving as a foundation for future automation and AI-powered robotic applications.

---

## Features

-  Large-scale robotic arm (~4 ft)
-  Multi-axis servo motor control
-  Real-time manual control using potentiometers
-  Smooth joint movement
-  Heavy-duty mechanical structure
-  Arduino Mega based controller
-  Real-time analog signal processing
-  Easily expandable for automation

---

# Hardware Used

- Arduino Mega 2560
- High Torque Servo Motors (MG996R / Industrial Servos)
- 10K Potentiometers
- External 5V–7.4V Power Supply
- Robotic Arm Frame
- Jumper Wires

---

# System Architecture

```text
Potentiometers
      │
      ▼
Arduino Mega
      │
Analog Signal Processing
      │
      ▼
PWM Servo Signals
      │
      ▼
High Torque Servo Motors
      │
      ▼
Robotic Arm Movement
```

---

# Working Principle

1. User rotates a potentiometer.
2. Arduino reads the analog value.
3. Analog values are mapped to servo angles.
4. Servo motors receive PWM signals.
5. Each robotic joint moves accordingly.
6. The robotic arm mimics the user's movement in real time.

---

# Pin Connections

## Servo Motors

| Joint | Arduino Pin |
|--------|-------------|
| Base | D2 |
| Shoulder | D3 |
| Elbow | D4 |
| Wrist | D5 |

## Potentiometers

| Potentiometer | Arduino Pin |
|---------------|-------------|
| Base | A0 |
| Shoulder | A1 |
| Elbow | A2 |
| Wrist | A3 |

---



# Project Structure

```
BUJA/
│
├── README.md
├── LICENSE
├── code/
│   └── BUJA.ino
├── hardware/
│   ├── wiring_diagram.png
│   ├── mechanical_design.pdf
│   └── BOM.xlsx
├── images/
│   ├── prototype.jpg
│   ├── robotic_arm.jpg
│   └── demo.gif
└── docs/
    └── future_work.md
```

---

#  Applications

- Industrial Pick-and-Place Systems
- Warehouse Automation
- Educational Robotics
- Research Projects
- Embedded Systems Learning
- Manufacturing Demonstrations

---

# Future Improvements

- Inverse Kinematics
- Computer Vision Integration
- Wireless ESP32 Control
- Bluetooth Mobile App
- Joystick Controller
- ROS Integration
- AI Object Detection
- Camera-Based Automation
- Position Feedback Encoders

---

# Technical Specifications

| Parameter | Value |
|------------|--------|
| Controller | Arduino Mega 2560 |
| Degrees of Freedom | 4+ |
| Control Method | Potentiometer |
| Programming Language | Arduino C++ |
| Actuators | High Torque Servo Motors |
| Power Supply | 5V–7.4V External Supply |

---

# Learning Outcomes

This project helps in understanding:

- Arduino Programming
- Servo Motor Control
- PWM Signal Generation
- Analog Sensor Interface
- Robotic Arm Mechanics
- Embedded Systems
- Multi-Axis Motion Control

---

# Demonstration

Add the following files inside the `images` folder:

- Prototype Image
- Final Assembly
- Wiring Diagram
- Motion GIF
- Working Video

---

# Contributing

Contributions are welcome.

1. Fork the repository.
2. Create a new feature branch.
3. Commit your changes.
4. Push your branch.
5. Create a Pull Request.

---

# License

This project is licensed under the MIT License.

---

# Author

**BUJA – Heavy Duty Robotic Arm**

Developed as an embedded robotics project demonstrating real-time multi-axis robotic control using Arduino Mega and high-torque servo motors.

---

If you found this project useful, please consider giving the repository a **Star**.
