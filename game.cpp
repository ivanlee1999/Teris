#include"game.h"
#include "raylib.h"


Game::Game(int width, int height, std::string title)
    :
    board(settings::boardStartingPos, settings::boardSize, settings::cellLength, settings::paddingLength), TetriJay(board)
{
    // assert(IsWindowReady());
    InitWindow(width, height, title.c_str());
    SetTargetFPS(settings::fps);
    // TetriJay.Clockwise();
    // for(int x = 0; x < settings::boardSize.getX(); x++){
    //     for(int y = 0; y <settings::boardSize.getY(); y++){
    //         board.SetCell(Vec2(x,y), RED);
    //     }
    // }
}

Game::~Game() noexcept{
    CloseWindow();
}

void Game::tick(){
    BeginDrawing();
    update();
    draw();
    EndDrawing();
}

void Game::update(){
    if(IsKeyPressed(KEY_H)){
        TetriJay.CounterClockwise();
    }
    if(IsKeyPressed(KEY_L)){
        TetriJay.Clockwise();
    }
}

void Game::draw(){
    ClearBackground(RAYWHITE);
    board.DrawWholeBoard();
    TetriJay.Draw();
}
