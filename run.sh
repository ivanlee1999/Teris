#!/bin/sh
g++ -std=c++20 board.cpp Tetrominoes.cpp game.cpp main.cpp `pkg-config --libs --cflags raylib` -o ./main & ./main         
