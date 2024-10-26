# Anti AFK Tool for Online Games using ATTINY85 Digispark

## Overview

This project utilizes the ATTINY85 Digispark module to simulate keyboard actions as a simple Anti AFK (Away From Keyboard) tool for online games, such as GTA Online. By utilizing this tool, players can keep their character active in the game, enabling them to farm for money and experience points (XP) while avoiding detection from anti-cheat systems.

## Features

- Simulates key presses (W, A, S, D, SPACE) to keep the game character active.
- Configurable delay intervals to mimic user behavior.
- Easy to upload and use with the ATTINY85.

## Files

This repository contains two code files depending on your needs or the specific behavior you would like to implement:

1. **FullKeyPressAntiAFK.ino** - A more complex version that includes LED indication and random delays.
2. **SimpleKeyPressAntiAFK.ino** - A simplified version with consistent timing.

## Setup

### Hardware Required

- ATTINY85 Digispark module

### Software Required

- Arduino IDE with Digispark board support installed.
- Digispark libraries.

### Installation Steps

1. **Install Arduino IDE**: If you haven't already, download and install the Arduino IDE from [Arduino's Official Website](https://www.arduino.cc/en/software).

2. **Set Up Digispark**:
   - In the Arduino IDE, go to `File` -> `Preferences`.
   - In the "Additional Boards Manager URLs" field, add: `http://digistump.com/package_digistump_index.json`
   - Open `Tools` -> `Boards Manager`, search for "Digistump AVR Boards" and install.

3. **Load the Code**:
   - Open `FullKeyPressAntiAFK.ino` or `SimpleKeyPressAntiAFK.ino` in Arduino IDE.
   - Select the appropriate board: `Tools` -> `Board` -> `Digispark (USB)`.

4. **Program the Digispark**:
   - Connect the Digispark module to your computer.
   - Click on the upload button in the Arduino IDE.
   - The IDE will show a prompt; when it asks you to plug in your Digispark, do so and wait for the upload to complete.

### Usage

1. Once uploaded, plug the Digispark module into your USB port.
2. Launch your game (e.g., GTA Online).
3. Observe the LED indicator for every key press action.

### Choose Your Code

- **Complex Behavior**: For more nuanced behavior including random delays to mimic human input behavior, use `FullKeyPressAntiAFK.ino`.
- **Simple Behavior**: For straightforward keypress actions at regular intervals, select `SimpleKeyPressAntiAFK.ino`.

> **Note**: Using such tools may violate the terms of service of some games. Use at your own risk. Always be vigilant about the ethical implications of using automated tools, especially in online environments.

## Contribution

Feel free to fork the repository, make improvements, and submit pull requests! Contributions on improving the stability, new features, or additional functionalities are welcome.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Disclaimer

This tool is intended for educational and experimental purposes only. The developers are not responsible for any consequences resulting from the use of this tool or any violations of game rules or terms of service that may occur as a result. Engaging in behavior that goes against the platform's regulations can result in bans or other penalties. Use responsibly!
