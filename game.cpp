#include"game.h"
#include "raylib.h"

Game::Game(int width, int height, std::string title)
    :
    board(Vec2<int>(200,200), Vec2<int>(10,20), 15, 2)
{
    // assert(IsWindowReady());
    InitWindow(width, height, title.c_str());
    SetTargetFPS(60);
    for(int x = 0; x < 10; x++){
        for(int y = 0; y <20; y++){
            board.SetCell(Vec2(x,y), RED);
        }
    }
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

}

void Game::draw(){
    ClearBackground(RAYWHITE);
    board.DrawWholeBoard();
}
