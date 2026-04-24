# IRIS (Infra-Red Interrupt System)
IRIS is an open-hardware project designed to teach the basics of electronics, soldering and basic components. With this device you can shut down almost any IR-controlled device, like TVs.

The firmware is currently in **ALPHA** stage, it does not fully work now. It will be updated when I get the parts.
## Why I made it?
I created IRIS for people interested in hardware hacking. It help young enthusiasts understand how different components communicate. By soldering the PCB themselves, makers see the connections between the code and the physical hardware.

## How it works? 
1. Brain: The ATtiny85 microcontroller stores the IR codes.
2. Logic: When the button is pressed the MCU wakes up and sends a modulated signal.
3. Driver: Since IR LEDs require more current than the MCU can provide, we use a IRLZ44N MOSFET.
4. Output: Two TSAL6100 IR diodes transmit the signal.


## Power
IRIS uses LP502535 (Li-PO battery), providing a great balance between size and power.
The battery is charged using Adafruit Micro-Lipo Charger for LiPoly Batt with USB Type C Jack (ID:4410).

## What will you learn?
- Basic Components: Understanding why we use resistors, electrolytic and ceramic capacitors and how they work.
- Soldering: Working with THT components. Cold joints etc.
- Transistor Logic: Understanding how a MOSFET uses a tiny voltage to control a much larger current flow.
- Power Management: Learning to work with Li-Po batteries safely, including charging using adafruit 4410.
- Programming: How to turn an Arduino Nano into an ISP programmer to flash firmware onto standalone microcontrollers like the ATtiny85.
- Microcontroller Basics: Getting to know ATtiny85, minimalist, compact and universal. How the ATtiny85 manages "deep sleep" mode to save battery (almost no use) and wakes up with instantly on a button press. 
- Reading Schematics: Learn how to understand schematics. Turning a digital circuit design into a working device.
- Ethical Hacking: What you can, and what you shouldn't do.
- Ordering your PCB: Learn how to order your PCB.

## BOM
BOM is located [Here](Manufacturing/BOM.csv)
Total is ≈ 38.67USD
You will also need:
- soldering iron and solder
- glue (for the case)
- double sided tape (for battery, pcb and charging module)
- cutting pliers

## Guide
The educational manual and Troubleshooting FAQ are currently being written.

<sub>The full assembly guide is planned and will begin development as soon as the parts arrive.</sub>

## Fallout Zine Page
<img width="1410" height="2000" alt="zine_page" src="https://github.com/user-attachments/assets/6ddaf53f-13d9-43ec-97d0-c528ad793da2" />

# Gallery  
## PCB
<img width="1241" height="655" alt="obraz" src="https://github.com/user-attachments/assets/4802341f-1707-48b8-919d-200e0f6ae187" />

## Schematic
<img width="1041" height="781" alt="obraz" src="https://github.com/user-attachments/assets/f10c117b-85ef-47b9-b90b-fbea57ab7f54" />

## 3D PCB
<img width="1082" height="642" alt="obraz" src="https://github.com/user-attachments/assets/b7f44ddc-6cea-4148-9ed4-4c5aded12e7e" />
<img width="1395" height="805" alt="obraz" src="https://github.com/user-attachments/assets/0ee7ddba-56e9-45a9-a6fd-e1ca61b0fa02" />
<img width="967" height="796" alt="obraz" src="https://github.com/user-attachments/assets/bb3070b4-51d6-461c-8c81-5b8ad866b889" />
<img width="557" height="874" alt="obraz" src="https://github.com/user-attachments/assets/7e4333eb-97c3-4e17-9c45-86c88ba4fed9" />


## Case
<img width="585" height="427" alt="obraz-removebg-preview(1)" src="https://github.com/user-attachments/assets/ccc045c4-c901-455d-982c-926cdb817327" />
<img width="690" height="362" alt="obraz-removebg-preview" src="https://github.com/user-attachments/assets/6175c888-a9d9-424b-981b-748d3d154eda" />

This project does not contain CAD files, because it was made in TinkerCAD which does not give any CAD files, just STL or OBJ
