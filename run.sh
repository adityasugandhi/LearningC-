#!/bin/bash

# Compile the program

if [ $# -eq 0 ]; then
    echo "Please provde a file name"
    exit 1
fi
g++ "$1" -o output

# Run the program
./output