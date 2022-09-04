#pragma once
#include"vec2.h"

namespace settings
{
    //window Settings
    inline constexpr int windowWidth = 600;
    inline constexpr int windowHeight = 600;
    inline constexpr int fps = 60;

    //Board Settings
    inline constexpr Vec2<int> boardStartingPos{200,200};
    inline constexpr Vec2<int> boardSize{10,20};
    inline constexpr int cellLength = 10;
    inline constexpr int paddingLength = 2;
}
