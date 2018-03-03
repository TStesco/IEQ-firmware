# Atmena Firmware

Firmware for Atmena indoor environment sensing hardware to get all sensor values and send data to web server. Built using Arduino AVR C/C++ (avr-g++) platform.

### Clone

```sh
git clone https://github.com/TStesco/atmena-firmware.git
cd atmena-firmware
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

### Code

Use the Sublime project (`firmware.sublime-project`) for writing code (or your text editor of choice) and the Arduino IDE to compile your code and upload it to the Arduino device.

You can open the Arduino project sketch (in the Arduino IDE) for compilation to device by opening the `sketch/sketch.ino` file.

#### Code Style:

+ Indentation is 2 spaces
+ Use camel case variable and function names (e.g. `sensorInput`, not `sensor_input` or `SensorInput`)
+ Header guards will be formatted like so: fileName.toUpperCase().replace('.', '_')
  + e.g. `SomeSensor.h` &rarr; `SOMESENSOR_H`
+ Custom includes (`#include ""`) should come before library includes (`#include <>`) and then the include groups should be sorted alphabetically
  + This rule may need to be broken in `sketch.ino` due to Arduino's poor build system

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
