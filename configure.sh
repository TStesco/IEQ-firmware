#!/bin/bash

OS=$(uname -s)

if [ "$OS" = "Darwin" ]; then # Mac OS X
  ARDUINO_LIBRARIES_DIR=~/Documents/Arduino/libraries
else # Linux
  ARDUINO_LIBRARIES_DIR=~/Arduino/libraries
fi

ln -s $(pwd)/lib $ARDUINO_LIBRARIES_DIR/lib
ln -s $(pwd)/deps $ARDUINO_LIBRARIES_DIR/deps
