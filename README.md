# Event-Driven Finite State Machine Firmware (C, Software Simulation)

## Overview
This project implements an **event-driven finite state machine (FSM)** using Embedded C principles.  
It demonstrates how firmware logic is structured using **states, events, and state transitions**, independent of hardware.

The project is **software-simulated** and focuses on firmware architecture rather than peripherals.

---

## Key Concepts Demonstrated
- Finite State Machine (FSM) design
- Event-driven firmware architecture
- Separation of concerns using `.c` and `.h` files
- Persistent state handling
- Modular and scalable code structure

---

## System Description
The system simulates an LED controller with three states:
- **OFF**
- **ON**
- **BLINK**

User input from the console is treated as **events**, similar to commands received via UART in real embedded systems.

The FSM decides:
- State transitions
- Actions to perform for each event

---

## Project Structure

