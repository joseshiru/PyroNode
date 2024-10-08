# PyroNode

**PyroNode** is an open-source ESP32-based control system designed to manage multiple outputs, monitor temperature, and provide robust control over external devices. Originally built for automotive applications as a cost-effective alternative to a PMU (Power Management Unit) or aftermarket ECU, PyroNode has proven its versatility and can be adapted for various other projects, such as home automation or even controlling a **coffee roaster**.

## Features

- **ESP32-based system**: Powerful microcontroller with Wi-Fi and Bluetooth capabilities.
- **8 MOSFET-controlled outputs**: Manage and control up to 8 high-power circuits.
- **Overload protection**: Ensures safety and reliability in high-power environments.
- **Temperature monitoring**: Supports 2 thermocouples via **MAX6675K** and other temperature sensors like **MAX31855EASA**.
- **Waterproof connectors**: Ideal for harsh environments such as automotive, outdoor, or industrial applications.
- **Optoisolated inputs**: Protects the system from electrical noise and interference.
- **Modular MOSFET satellites**: Easy expansion and replacement of MOSFET modules.
- **Flexible usage**: Designed initially for automotive use but adaptable to many applications, including industrial controls, environmental monitoring, or DIY home projects.

## Applications

While PyroNode was initially created for controlling circuits in an automotive environment (like a PMU without the expense of aftermarket systems), it can be utilized in a wide range of other scenarios:

- **Automotive**: Act as a PMU to control different car subsystems.
- **Home automation**: Manage lighting, HVAC, or any other electronic devices.
- **Coffee roasting**: Use the temperature sensors and output controls to monitor and adjust a coffee roaster in real-time.
- **Industrial automation**: Control machines and monitor temperature in industrial settings.
- **Smart gardening**: Automate watering systems and monitor environmental conditions.

## Project Breakdown

### Hardware Overview
- **MOSFET Modules**: Utilize **PSMN013-30MLC MOSFETs** for high-efficiency switching and control of the 8 output channels.
- **Power Supply**: Uses an **LD1085D2T33 voltage regulator** to provide a stable 3.3V power supply.
- **Temperature Monitoring**: Equipped with **2 thermocouples via MAX6675K** for accurate temperature measurements, expandable with additional sensors like the **MAX31855EASA**.
- **Waterproof Connectors**: For safe usage in outdoor or automotive applications.
- **Optoisolation**: Provides electrical isolation to protect the ESP32 from spikes or noise in the connected circuits.
- **Modular Design**: MOSFET satellite modules can be easily expanded or swapped for different configurations.

### Software Overview

The software is built using the **Arduino IDE** for the ESP32 platform. A basic example of controlling the MOSFETs is included in the `main.cpp` file. The example alternates turning on and off the 8 MOSFET outputs with a delay of 1 second.

```cpp
#include <Arduino.h>

int MOSFET0_PIN = 13;
int MOSFET1_PIN = 14;
int MOSFET2_PIN = 27;
int MOSFET3_PIN = 26;
int MOSFET4_PIN = 25;
int MOSFET5_PIN = 21;
int MOSFET6_PIN = 22;
int MOSFET7_PIN = 23;

void setup() {
  pinMode(MOSFET0_PIN, OUTPUT);
  pinMode(MOSFET1_PIN, OUTPUT);
  pinMode(MOSFET2_PIN, OUTPUT);
  pinMode(MOSFET3_PIN, OUTPUT);
  pinMode(MOSFET4_PIN, OUTPUT);
  pinMode(MOSFET5_PIN, OUTPUT);
  pinMode(MOSFET6_PIN, OUTPUT);
  pinMode(MOSFET7_PIN, OUTPUT);
}

void loop() {
  digitalWrite(MOSFET0_PIN, HIGH);
  digitalWrite(MOSFET1_PIN, HIGH);
  digitalWrite(MOSFET2_PIN, HIGH);
  digitalWrite(MOSFET3_PIN, HIGH);
  digitalWrite(MOSFET4_PIN, HIGH);
  digitalWrite(MOSFET5_PIN, HIGH);
  digitalWrite(MOSFET6_PIN, HIGH);
  digitalWrite(MOSFET7_PIN, HIGH);
  delay(1000);  
  digitalWrite(MOSFET0_PIN, LOW);
  digitalWrite(MOSFET1_PIN, LOW);
  digitalWrite(MOSFET2_PIN, LOW);
  digitalWrite(MOSFET3_PIN, LOW);
  digitalWrite(MOSFET4_PIN, LOW);
  digitalWrite(MOSFET5_PIN, LOW);
  digitalWrite(MOSFET6_PIN, LOW);
  digitalWrite(MOSFET7_PIN, LOW);
  delay(1000); 
}

```
## License

This project is licensed under the **Creative Commons Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)** license.

- **Free for personal and non-commercial use.**
- **Credits: Build by Jose Zuniga Marin.**
- **For commercial use, please contact hello@malecu.eu.**

You can read the full license [here](https://creativecommons.org/licenses/by-nc/4.0/).
