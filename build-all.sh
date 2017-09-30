#!/bin/bash

INPUT_FILES=$1*.cpp

for f in $INPUT_FILES;
do
  echo "Building: $f";
  g++ $f -o "${f%.cpp}.exe";
done
