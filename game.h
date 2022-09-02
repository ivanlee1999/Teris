#include "raylib.h"
#include <iostream>

class Game{
    public:
       Game(int height, int wideth, std::string title); 
       ~Game() noexcept;
       void tick();
    private:
        void update();
        void draw();
};
