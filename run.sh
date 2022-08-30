#!/bin/sh
g++ -std=c++20 main.cpp `pkg-config --libs --cflags raylib` -o ./main & ./main         
