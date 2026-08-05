## *BUJA – Heavy-Duty Multi-DOF Robotic Arm*

<img width="300" height="261" alt="image_20260723_0615292fa298cc-38a8-4643-83a0-4dd2cc819ac6-1" src="https://github.com/user-attachments/assets/76cea7ed-75f4-4b1d-b1a4-e848fd328bf2" />
<img width="141" height="261" alt="WhatsApp Image 2026-07-31 at 11 26 10 AM" src="https://github.com/user-attachments/assets/79223a2e-cb32-4305-8699-a0ee22926654" />
<img width="141" height="261" alt="WhatsApp Image 2026-07-31 at 11 26 09 AM (1)" src="https://github.com/user-attachments/assets/c91550dd-e441-4e2e-8b3c-e7f961e90bb0" />
<img width="191" height="261" alt="WhatsApp Image 2026-07-31 at 11 26 09 AM" src="https://github.com/user-attachments/assets/f3f075f6-8401-4a73-8c3b-dbc85c64e31d" />


BUJA – Heavy-Duty Multi-DOF Robotic Arm with Arduino Mega-Based Manual Control and High-torque Servo Motors for Heavy-Duty Object Manipulation and Real-Time Manual Control.

## Overview
BUJA is a large-scale (4 ft), heavy-duty robotic arm engineered for multi-degree-of-freedom object manipulation. Built on an Arduino Mega, it uses high-torque servo motors (MG996R/industrial-grade) driven by potentiometer-based manual controls, enabling intuitive real-time joint positioning. Analog inputs are mapped to precise servo angles, demonstrating robust mechanical design, high-power actuation, and coordinated multi-axis control for lifting and positioning tasks.

<p align="center">

![Arduino Mega](https://img.shields.io/badge/Controller-Arduino%20Mega-0C7C8C?logo=arduino)
![Embedded C](https://img.shields.io/badge/Language-Embedded%20C-steelblue)
![Status](https://img.shields.io/badge/Project-Completed-mutedforestgreen)
![Robotics](https://img.shields.io/badge/Domain-Industrial%20Robotics-orange)
![License](https://img.shields.io/badge/License-MIT-yellow)

</p>

## Features
-  6-DOF robotic arm for flexible movement
-  Heavy-duty mechanical structure
-  High-torque servo motor actuation
-  Precise joint angle control
-  Wireless remote operation
-  Smooth and stable arm movement
-  Real-time control using Arduino Mega
-  Multi-axis object manipulation
-  Modular and upgradeable design
-  Suitable for pick-and-place applications
-  Easy calibration and maintenance

## Hardware Used

| Component | Quantity | Description |
|---|---|---|
| Arduino Mega | 1 | Main microcontroller |
| High Torque Servo Motors | 4 | MG996R / industrial-grade servos |
| Potentiometers | 6 | 10kΩ, for manual joint control |
| Robotic Arm Structure | 1 | Wood |
| External Power Supply | 1 | 5V–7.4V, high current |
| Jumper Wires | As needed | For circuit connections |

## System Architecture
<p align="center">
<img width="400" height="576" alt="buja" src="https://github.com/user-attachments/assets/0d1a6308-1607-4c41-be0f-e77088b6a2b3" />

# Working Principle

1. User rotates potentiometers assigned to each joint (base, shoulder, elbow, wrist).
2. Arduino Mega reads the corresponding analog values.
3. Analog values are mapped to servo angles (0°–180°).
4. Servo motors move to match the mapped angle.
5. Arm responds in real time, mirroring user input for manual multi-axis control

# Pin Connections

## Pin Configuration

| Component | Signal | Arduino Mega Pin |
|---|---|---|
| Base Servo | Control (PWM) | Pin 2 |
| Shoulder Servo | Control (PWM) | Pin 3 |
| Elbow Servo | Control (PWM) | Pin 4 |
| Wrist Servo | Control (PWM) | Pin 5 |
| Potentiometer 1 (Base) | Analog Input | A0 |
| Potentiometer 2 (Shoulder) | Analog Input | A1 |
| Potentiometer 3 (Elbow) | Analog Input | A2 |
| Potentiometer 4 (Wrist) | Analog Input | A3 |
| Servo Power (VCC) | External Power Supply | 5V–7.4V (external) |
| Servo Ground (GND) | Common Ground | GND |
| Potentiometer VCC | Power | 5V (Arduino) |
| Potentiometer GND | Ground | GND (Arduino) |

## Circuitry connections
<p align="center">
<img width="836" height="524" alt="ChatGPT Image Aug 5, 2026, 08_48_48 PM" src="https://github.com/user-attachments/assets/bed1e201-63e1-40c5-9cc2-47b492320811" />

## Technical Specifications

| Parameter | Value |
|------------|--------|
| Controller | Arduino Mega 2560 |
| Degrees of Freedom | 4+ |
| Control Method | Potentiometer |
| Programming Language | Arduino C++ |
| Actuators | High Torque Servo Motors |
| Power Supply | 5V–7.4V External Supply |

##  Applications

- Industrial Pick-and-Place Systems
- Warehouse Automation
- Educational Robotics
- Research Projects
- Embedded Systems Learning
- Manufacturing Demonstrations
- Hazardous Object Handling
- Prototype Testing

## Future Improvements

- Add inverse kinematics for automated positioning
- Replace potentiometers with joystick or wireless control
- Integrate feedback sensors (encoders) for precision
- Add vision system for object detection
- Include load/pressure sensors to prevent overloading
- Mount arm on a mobile base for greater reach
  
## License

![License](https://img.shields.io/badge/License-MIT-3A3F44)

This project is licensed under the **MIT License**

## Developed By
- Chandana S
- Koushik M
