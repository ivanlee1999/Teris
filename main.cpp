// #include "N/A/Users/yifan_li/vcpkg/packages/raylib_x64-osx/include/raylib.h"
#include "raylib.h"
#include "game.h"
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    const int windowWidth = 600, windowHeight = 600;
    Game game = Game(windowWidth, windowHeight, "Yifan's Teris Game Is The Best");

    while(!WindowShouldClose()){
        game.tick();
    }

}
