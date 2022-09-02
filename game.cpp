#include"game.h"
#include "raylib.h"
#include <cassert>

Game::Game(int width, int height, std::string title){
    assert(IsWindowReady());
    InitWindow(width, height, title.c_str());
    SetTargetFPS(30);
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
}
