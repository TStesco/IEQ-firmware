@echo off

REM Create the necessary directory junctions in the Arduino libraries folder
mklink /j "%USERPROFILE%\Documents\Arduino\libraries\lib" .\lib
mklink /j "%USERPROFILE%\Documents\Arduino\libraries\deps" .\deps
