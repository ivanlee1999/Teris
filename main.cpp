#include"main.h"
// #include "N/A/Users/yifan_li/vcpkg/packages/raylib_x64-osx/include/raylib.h"
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    Game game = Game(settings::windowWidth, settings::windowHeight, "Yifan's Teris Game Is The Best");

    while(!WindowShouldClose()){
        game.tick();
    }

}
