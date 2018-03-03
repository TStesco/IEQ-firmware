# IEQ Firmware

Firmware for Indoor Environment Quality (IEQ) sensing hardware. Polls all sensors connected to microcontroller and sends data to web server. Built using Arduino AVR C/C++ (avr-g++) platform. Part of the Atmena Indoor Environment Quality sensing and analysis system built by Andrew Gillies, Aayush Rajasekaran, Nathan Woltman, and Tom Stesco. Read more at https://tstesco.github.io/atmena-indoor-env-quality/.

### Clone

```sh
git clone https://github.com/TStesco/IEQ-firmware.git
cd IEQ-firmware
```

### Configure

First make sure you have the Arduino IDE, if not you can download it from their website for free: https://www.arduino.cc/en/Main/Software

#### Ubuntu/Debian/Mac OS X

```sh
./configure
```

#### Windows

```sh
configure
```

### Code and usage

Use the Sublime project (`firmware.sublime-project`) for writing code (or your text editor of choice) and the Arduino IDE to compile your code and upload it to the Arduino device.

You can open the Arduino project sketch (in the Arduino IDE) for compilation to device by opening the `sketch/sketch.ino` file.

### Test

Run tests with a single command:

#### Ubuntu/Debian/Mac OS X

```sh
./test.sh
```

#### Windows

```sh
test
```
