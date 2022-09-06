#pragma once
#include<raylib.h>
#include "board.h"
#include"vec2.h"

class Tetromino{
public:
    Tetromino(const bool* shape, int dimension, Color color, const Board& board);
    void Draw() const;
    enum class rotateDirection{
        UP,
        RIGHT,
        DOWN,
        LEFT,
    };
    void Clockwise();
    void CounterClockwise();

private:
    Vec2<int> boardPos;
    const Color color;
    const bool* shape;
    const int dimension;
    const Board& board;
    rotateDirection currentDirection = rotateDirection(0);
};

class Straight : public Tetromino{
public:
    Straight(const Board& board) : Tetromino(shape, dimension, color, board){};
private:
    static constexpr bool shape[] = {0,0,0,0,
                                     1,1,1,1,
                                     0,0,0,0};
    static constexpr int dimension = 4;
    static constexpr Color color = SKYBLUE;
};


class Square : public Tetromino{
public:
    Square(const Board& board) : Tetromino(shape, dimension, color, board){};
private:
    static constexpr bool shape[] = {1,1,
                                     1,1};
    static constexpr int dimension = 2;
    static constexpr Color color = SKYBLUE;
};


class Tee : public Tetromino{
public:
    Tee(const Board& board) : Tetromino(shape, dimension, color, board){};
private:
    static constexpr bool shape[] = {0,1,0,
                                     1,1,1,
                                     0,0,0};
    static constexpr int dimension = 3;
    static constexpr Color color = SKYBLUE;
};

class Jay : public Tetromino{
public:
    Jay(const Board& board) : Tetromino(shape, dimension, color, board){};
private:
    static constexpr bool shape[] = {1,0,0,
                                     1,1,1,
                                     0,0,0};
    static constexpr int dimension = 3;
    static constexpr Color color = SKYBLUE;
};

class El : public Tetromino{
public:
    El(const Board& board) : Tetromino(shape, dimension, color, board){};
private:
    static constexpr bool shape[] = {0,0,1,
                                     1,1,1,
                                     0,0,0};
    static constexpr int dimension = 3;
    static constexpr Color color = SKYBLUE;
};


class SkewS : public Tetromino{
public:
    SkewS(const Board& board) : Tetromino(shape, dimension, color, board){};
private:
    static constexpr bool shape[] = {0,1,1,
                                     1,1,0,
                                     0,0,0};
    static constexpr int dimension = 3;
    static constexpr Color color = SKYBLUE;
};

class SkewZ : public Tetromino{
public:
    SkewZ(const Board& board) : Tetromino(shape, dimension, color, board){};
private:
    static constexpr bool shape[] = {1,1,0,
                                     0,1,1,
                                     0,0,0};
    static constexpr int dimension = 3;
    static constexpr Color color = SKYBLUE;
};

