@echo off

REM cmake -G "MinGW Makefiles" .
REM cmake -S. -B _build -G "MinGW Makefiles"
cmake -S. -B _build -G "Ninja"

