#!/bin/bash

echo "Compile and Run Multiple Files"

echo "gcc -c main.c"
gcc -c main.c

echo "gcc -c test.c"
gcc -c test.c

echo "gcc -o main.exe main.o test.o"
gcc -o main.exe main.o test.o

echo "./main.exe"
./main.exe
