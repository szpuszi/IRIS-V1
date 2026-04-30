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
IRIS uses LP403035.
The battery is charged using PiMoroni PIM611.

## What will you learn?
- Basic Components: Understanding why we use resistors, electrolytic and ceramic capacitors and how they work.
- Soldering: Working with THT and SMD components. Cold joints etc.
- Transistor Logic: Understanding how a MOSFET uses a tiny voltage to control a much larger current flow.
- Power Management: Learning to work with Li-Po batteries safely, including charging.
- Programming: How to turn an Arduino into an ISP programmer to flash firmware onto standalone microcontrollers like the ATtiny85.
- Microcontroller Basics: Getting to know ATtiny85, compact and universal microcontroller. How the ATtiny85 manages "deep sleep" mode to save battery (almost no use) and wakes up with instantly on a button press. 
- Reading Schematics: Learn how to understand schematics. Turning a digital circuit design into a working device.
- Ethical Hacking: What you can, and what you shouldn't do.
- Ordering your PCB: Learn how to order your PCB.

## BOM
BOM is located [Here](Manufacturing/BOM.csv)

Total is ≈ 60USD

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
<img width="1497" height="794" alt="obraz" src="https://github.com/user-attachments/assets/6b3289f8-2565-4e50-9ea2-64be3bd706c2" />

## Schematic
<img width="563" height="424" alt="obraz" src="https://github.com/user-attachments/assets/b44614c0-ba58-4a82-87d0-667adcf9b703" />

## 3D PCB
<img width="1043" height="601" alt="obraz" src="https://github.com/user-attachments/assets/bb4b3f0c-79d6-4554-b332-fa254ba0a208" />
<img width="1326" height="742" alt="obraz" src="https://github.com/user-attachments/assets/17d849b5-202a-475c-89f4-94fe36980149" />
<img width="873" height="821" alt="obraz" src="https://github.com/user-attachments/assets/5f6107d1-3ca1-4606-83c5-371ff59d6a5b" />
<img width="446" height="804" alt="obraz" src="https://github.com/user-attachments/assets/6bb18ad8-a31b-4138-adf3-412ffe6fb6cc" />

## Case
<img width="585" height="427" alt="obraz-removebg-preview(1)" src="https://github.com/user-attachments/assets/ccc045c4-c901-455d-982c-926cdb817327" />
<img width="690" height="362" alt="obraz-removebg-preview" src="https://github.com/user-attachments/assets/6175c888-a9d9-424b-981b-748d3d154eda" />

