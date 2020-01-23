#!/bin/bash

echo "Compile and Run Simple Modular"

echo "gcc -c main.c"
gcc -c main.c

echo "gcc -o main main.o"
gcc -o main.exe main.o

echo "./main.exe"
./main.exe
