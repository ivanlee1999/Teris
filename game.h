#pragma once
#include "raylib.h"
#include <iostream>
#include <cassert>
#include"board.h"
#include"Settings.h"
#include"Tetrominoes.h"


class Game{
    public:
       Game(int height, int wideth, std::string title); 
       ~Game() noexcept;
       void tick();
    private:
        void update();
        void draw();
        Board board;
        Jay TetriJay;
};
