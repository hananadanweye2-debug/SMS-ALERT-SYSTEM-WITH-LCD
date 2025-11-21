# Arduino SMS Alert System with Bluetooth, Buzzer, LED, Vibration Motor & LCD

This project is an Arduino-based **SMS Alert System** that uses a **Bluetooth module** to receive messages and immediately trigger multiple types of alerts. When an SMS or notification is received, the system activates a **buzzer**, **LED**, and **vibration motor**, while also displaying the message on a **16×2 LCD**.

It is designed as a simple but effective alert device for personal notifications, silent vibration alerts, and multi-channel warning systems.

---

## 📌 Features

- 📲 Receives SMS/text via Bluetooth (HC-05 / HC-06)
- 🔊 Buzzer alarm for sound notifications
- 💡 LED indicator for visual alerts
- 📳 Vibration motor for silent/tactile alerts
- 📟 LCD (16×2) for displaying the received message
- 🔌 Fully controlled by Arduino Uno
- 🧪 Simple and easy to build on a breadboard

---

## 🛠️ Components Used

- Arduino Uno  
- HC-05 / HC-06 Bluetooth module  
- 16×2 LCD display + potentiometer  
- Buzzer  
- LED + 220Ω resistor  
- Vibration motor  
- Breadboard & jumper wires  

---

## 🔌 Overview of How It Works

1. A phone sends a message through a Bluetooth terminal app.  
2. The Bluetooth module receives the message and passes it to the Arduino.  
3. Arduino activates:  
   - 🔊 **Buzzer**  
   - 💡 **LED**  
   - 📳 **Vibration Motor**  
4. The message is shown on the **LCD screen**.  
5. After a short delay, the system resets and waits for the next message.
