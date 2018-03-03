#!/bin/bash

echo

# Static Analysis
cppcheck --error-exitcode=1 --enable=warning lib

if [ $? -ne 0 ]; then
  echo
  echo Static Analysis FAILED!
  echo
  exit 1
fi

echo

# Style Linting
files=(lib/*)
echo Linting files: "${files[@]}"
vera++ --error \
  -R L001 \
  -R L002 \
  -R L003 \
  -R L004 \
  -R L005 \
  -R T001 \
  -R T002 \
  -R T003 \
  -R T004 \
  -R T005 \
  -R T006 \
  -R T007 \
  -R T008 \
  -R T009 \
  -R T010 \
  -R T017 \
  -R T018 \
  -R T019 \
  -P max-line-length=120 \
  "${files[@]}"

if [ $? -ne 0 ]; then
  echo
  echo Linting FAILED!
  echo
  exit 1
fi

echo
echo "PASSED"
echo
