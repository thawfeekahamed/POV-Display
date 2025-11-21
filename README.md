# 🔵 POV LED Display Using ATtiny85

---

## 🧭 Project Overview

The **Persistence of Vision (POV) LED Display** is an innovative project designed to demonstrate the phenomenon of visual persistence using modern embedded systems technology.  
By leveraging the **Atmel ATtiny85** microcontroller, this system displays dynamic text or patterns on a rotating LED array, creating the illusion of a floating image in midair.  

This project merges **embedded system design**, **sensor integration**, and **wireless power transmission** to achieve a compact, energy-efficient, and visually captivating display.

---

## 🎯 Objectives

- To design and implement a POV display utilizing an **ATtiny85** microcontroller.  
- To explore the concept of **visual persistence** and its application in digital displays.  
- To develop a **low-power**, **wirelessly powered**, and **compact** display system.  
- To demonstrate synchronization through a **Hall Effect sensor** and control via an **Infrared (IR) sensor**.  

---

## 🔬 Principle of Operation

The project operates on the **Persistence of Vision (POV)** principle — a visual illusion where multiple discrete light images blend into one continuous image due to the human eye’s response time (~10–15 ms).  

In this system:
1. A **DC motor** spins an LED arm at high speed (≥1000 RPM).  
2. The **ATtiny85** microcontroller controls each LED’s ON/OFF sequence based on rotational position.  
3. A **Hall Effect sensor** detects each rotation cycle for synchronization.  
4. An **IR sensor** provides wireless control input (e.g., mode switching).  
5. **Wireless power transmission** eliminates physical wiring to the rotating assembly, enhancing aesthetics and reliability.

The result is a seamless visual display appearing to float in space — capable of showing text, symbols, or simple animations.

---

## ⚙️ System Components

| Component | Quantity | Description |
|------------|-----------|-------------|
| **ATtiny85 Microcontroller** | 1 | Controls LED timing and logic operations |
| **White LEDs (5mm)** | 6 | Display elements for visual output |
| **LM7805 Regulator** | 1 | Provides 5V regulated power |
| **Hall Effect Sensor (US5881)** | 1 | Detects rotation and position |
| **Infrared Sensor** | 1 | Wireless control switch |
| **DC Motor** | 1 | Rotational drive mechanism |
| **Capacitors (10µF, 0.22µF, 0.1µF)** | Various | Stabilizes power and signal circuits |
| **Schottky Diode** | 1 | Protects against back EMF |
| **Copper Wire (30cm)** | 1 | For circuit connections |
| **General Purpose Board** | 1 | Mounting platform |
| **Switch** | 1 | Manual system control |

---

## 🧰 Tools and Technologies

- **Arduino IDE** – Used for programming the ATtiny85 microcontroller.  
- **Arduino Uno** – Serves as an ISP programmer for ATtiny85.  
- **EasyEDA** – Used for schematic and PCB design.  
- **YouTube & Arduino Tutorials** – Used for reference during system testing and firmware development.  

---

## 🧩 Hardware Design

The hardware assembly consists of:
- A **rotating arm** containing the LED array and ATtiny85 circuit.  
- A **stationary Hall sensor** positioned near the rotating magnet to detect angular position.  
- **Wireless power coils** to transmit energy to the rotating module.  
- **Infrared control module** for wireless mode switching or reset.  

The system’s compactness and minimal wiring make it ideal for future integration into smart appliances, decorative fans, or wearable POV devices.

---

## 💻 Software Implementation

1. The **ATtiny85** is programmed via the **Arduino IDE** using C/C++ syntax.  
2. Timing loops and LED pattern arrays are defined to display desired text or shapes.  
3. The **Hall sensor input** triggers synchronization interrupts.  
4. The **IR sensor input** toggles display modes or turns the system ON/OFF.  
5. The firmware ensures flicker-free performance by maintaining appropriate rotation speed and LED switching frequency.

---

## 📈 Project Timeline

| Task | Duration (Weeks) |
|------|------------------|
| Project Proposal & Research | 1–2 |
| Hardware Design & Simulation | 3–5 |
| Program Development | 6–7 |
| Circuit Assembly | 8–9 |
| Testing & Calibration | 10–12 |
| Final Evaluation | 13–14 |

---

## 💰 Budget Summary

| Component | Unit Price (LKR) | Quantity | Total (LKR) |
|------------|------------------|-----------|--------------|
| ATtiny85 Microcontroller | 350 | 1 | 350 |
| LEDs (5mm White) | 2 | 6 | 12 |
| LM7805 Voltage Regulator | 20 | 1 | 20 |
| Hall Effect Sensor | 20 | 1 | 20 |
| DC Motor | 250 | 1 | 250 |
| Miscellaneous (Capacitors, Diodes, Wires, PCB, Switch) | — | — | 182 |
| **Total Estimated Cost** | | | **834 LKR** |

---

## 📚 References

- [STEMpedia: Arduino POV Display](https://create.arduino.cc/projecthub/theSTEMpedia/persistence-of-vision-pov-display-using-arduino-583d5f)  
- [RootSaid: Arduino POV Tutorial](https://rootsaid.com/arduino-pov-display-tutorial/)  
- [Maker.pro: POV Display Project](https://maker.pro/arduino/projects/arduino-pov-display)  
- [Programming ATtiny85 with Arduino Uno](https://create.arduino.cc/projecthub/arjun/programming-attiny85-with-arduino-uno-afb829)  
- [ATtiny85 Datasheet](https://www.alldatasheet.com/datasheet-pdf/pdf/174761/ATMEL/ATTINY85.html)  
- [LM7805 Voltage Regulator Datasheet](https://www.alldatasheet.com/datasheet-pdf/pdf/82833/FAIRCHILD/LM7805.html)  
- [Hall Effect Sensor Datasheet](https://www.alldatasheet.com/datasheet-pdf/pdf/515289/FCI/FH130.html)  

---

## 📸 Demonstration Videos

- [POV Display Demonstration](https://youtu.be/JrcKJOdjQN8)  
- [Infrared Receiver Switch](https://youtu.be/ks0bJKX4JH0)  
- [Wireless Power Transmission](https://youtu.be/4UmVLfFNx7U)

---

## 🚀 Future Enhancements

- Integrate **Bluetooth/Wi-Fi** for real-time text updates.  
- Develop a **POV clock** version with time synchronization.  
- Implement **multi-color RGB LEDs** for advanced visuals.  
- Enhance energy transfer efficiency via improved wireless coils.  
- Miniaturize the design for use in **smart fan displays** and **wearable devices**.  

---

## 🧑‍💻 Author Information

**Name:** M.F. Thawfeek Ahamed  
**Register No:** AA1377  
**Department:** Electronics and Telecommunication Engineering  
**Institution:** SLTC Research University  
**Email:** [Insert your email here]  

---

## 🏁 Conclusion

The **POV LED Display using ATtiny85** showcases an efficient fusion of **embedded control**, **sensor technology**, and **human visual science**.  
By implementing modern techniques such as **wireless power transmission** and **IR-based control**, this project stands as a compelling demonstration of innovation, engineering precision, and creative visualization.  

It highlights how minimal hardware, when paired with intelligent design, can create a striking, energy-efficient, and functional display system — a testament to the ingenuity achievable through modern embedded engineering.

---
