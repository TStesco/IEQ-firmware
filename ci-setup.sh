#!/bin/bash

# If the cppcheck command doesn't exist
hash cppcheck 2>/dev/null || {
  sudo apt-get install cppcheck -y
}

# If the vera++ command doesn't exist
hash vera++ 2>/dev/null || {
  sudo apt-get install vera++ -y
}
