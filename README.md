# 🎮 Anti AFK Tool for Online Games using ATTINY85 Digispark

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=flat&logo=Arduino&logoColor=white)](https://www.arduino.cc/)

## 📖 Overview

This project utilizes the ATTINY85 Digispark module to simulate keyboard actions as a simple Anti AFK (Away From Keyboard) tool for online games. Keep your character active while farming for in-game resources, all while staying undetected by common anti-cheat systems.

## ✨ Features

- 🎯 Simulates key presses (W, A, S, D, SPACE)
- ⏱️ Configurable delay intervals
- 💡 LED status indication
- 🎲 Random delay patterns
- 🔌 Plug-and-play USB interface

## 📁 Files

Choose the version that best suits your needs:

| File Name | Description |
|-----------|-------------|
| `FullKeyPressAntiAFK.ino` | Advanced version with LED indicators and random delays |
| `SimpleKeyPressAntiAFK.ino` | Minimalist version with consistent timing |

## 🛠️ Setup

### Hardware Requirements

- ATTINY85 Digispark module

### Software Requirements

- Arduino IDE
- Digispark board support package
- Required libraries

### 📥 Installation Steps

1. **Arduino IDE Setup**
   ```bash
   # Install Arduino IDE from:
   https://www.arduino.cc/en/software
   ```

2. **Configure Digispark Support**
   - Open Arduino IDE preferences
   - Add to Board Manager URLs:
     ```
     http://digistump.com/package_digistump_index.json
     ```
   - Install "Digistump AVR Boards" via Boards Manager

3. **Upload Process**
   - Open desired `.ino` file
   - Select `Digispark (USB)` board
   - Click upload and follow prompts

## 🎯 Usage

1. Connect Digispark to USB
2. Launch your game
3. Monitor LED for activity status

### Version Selection Guide

| Feature | FullKeyPressAntiAFK | SimpleKeyPressAntiAFK |
|---------|--------------------|-----------------------|
| LED Indicator | ✅ | ❌ |
| Random Delays | ✅ | ❌ |
| Memory Usage | Higher | Lower |
| Complexity | Advanced | Basic |

## ⚠️ Important Notes

```diff
- Using automation tools may violate game terms of service
! Use at your own risk
+ Educational purposes only
```

## 🤝 Contribution

We welcome contributions! Here's how:

1. Fork the repository
2. Create your feature branch
   ```bash
   git checkout -b feature/AmazingFeature
   ```
3. Commit your changes
4. Push and submit a Pull Request

## 📄 License

This project is under the MIT License. See [LICENSE](LICENSE) for details.

## ⚖️ Disclaimer

```
This tool is for educational purposes only. The developers assume no 
responsibility for any consequences resulting from its use. Users must 
comply with all applicable game rules and terms of service.
```

## 🔗 Quick Links

- [Arduino IDE Download](https://www.arduino.cc/en/software)
- [Digistump Wiki](http://digistump.com/wiki/digispark)
- [Report Issues](../../issues)
- [Request Features](../../issues)

---

<div align="center">
   Made with ❤️ by [Your Username]
</div>
