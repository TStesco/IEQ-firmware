@echo off

setlocal EnableDelayedExpansion

echo.

rem ## Static Analysis ##
cppcheck --error-exitcode=1 --enable=warning lib
echo.

if %errorlevel% neq 0 (
  echo Static Analysis FAILED^^!
  exit /b %errorlevel%
)

rem ## Style Linting ##
set files=
for %%a in (lib\*) do set files=!files! "%%a"
echo Linting files:!files!
vera++ --error ^
  -R L001 ^
  -R L002 ^
  -R L003 ^
  -R L004 ^
  -R L005 ^
  -R T001 ^
  -R T002 ^
  -R T003 ^
  -R T004 ^
  -R T005 ^
  -R T006 ^
  -R T007 ^
  -R T008 ^
  -R T009 ^
  -R T010 ^
  -R T017 ^
  -R T018 ^
  -R T019 ^
  -P max-line-length=120 ^
  !files!
echo.

if %errorlevel% neq 0 (
  echo Linting FAILED^^!
  exit /b %errorlevel%
)

echo PASSED
