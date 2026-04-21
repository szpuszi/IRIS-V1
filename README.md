# IRIS (Infra-Red Interrupt System)
IRIS is an open-hardware project designed to teach the basics of electronics, soldering and basic components. With this device you can shut down almost any IR-controlled device, like TVs.
## 🎯 Why I made it?
I created IRIS for people interested in hardware hacking. It help young enthusiasts understand how different components communicate. By soldering the PCB themselves, makers see the connections between the code and the physical hardware.

## ⚙ How it works? 
1. Brain: The ATtiny85 microcontroller stores the IR codes.
2. Logic: When the button is pressed the MCU wakes up and sends a modulated signal.
3. Driver: Since IR LEDs require more current than the MCU can provide, we use a BS170 MOSFET.
4. Output: Two TSAL6100 IR diodes transmit the signal.


## 🔋 Power
IRIS uses LP502535 (Li-PO battery), providing a great balance between size and power.
The battery is charged using Adafruit Micro-Lipo Charger for LiPoly Batt with USB Type C Jack (ID:4410).

## 📚 What will you learn?
- Soldering
- How MOSFETs work as electronic switches.
- more adding later dont FORGET!!!!!!!!!!!!!!!!

## 📋 BOM
BOM is located [Here](Manufacturing/BOM.csv)
