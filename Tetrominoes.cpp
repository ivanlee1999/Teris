#include"Tetrominoes.h"
#include <termcap.h>
#include<iostream>

Tetromino::Tetromino(const bool* shape, int dimension, Color color, const Board& board)
    :
    shape(shape),
    dimension(dimension),
    color(color),
    boardPos(board.GetWidth()/2 - dimension/2, 0),
    board(board){};

void Tetromino::Draw() const{
    for(int x = 0; x < dimension; x++){
        for(int y = 0; y < dimension; y++){
            bool cell = false;
            switch (currentDirection) {
                case rotateDirection::UP:
                    cell = shape[y * dimension + x];
                    break;
                case rotateDirection::RIGHT:
                    cell = shape[dimension * (dimension-1) - dimension * x +y];
                    break;
                case rotateDirection::DOWN:
                    cell = shape[(dimension * dimension -1)- dimension *y -x];
                    break;
                case rotateDirection::LEFT:
                    cell = shape[(dimension-1) + dimension*x - y];
                    break;

            }
            if(cell){
                board.DrawCell(boardPos + Vec2<int>{x,y}, color);
            }
        }
    }
}

void Tetromino::Clockwise(){
    currentDirection = rotateDirection((int(currentDirection)+1)%4);
    std::cout << int(currentDirection) << std::endl;
}

void Tetromino::CounterClockwise(){
    if(currentDirection == rotateDirection::UP){
        currentDirection = rotateDirection::RIGHT;
    }
    else currentDirection = rotateDirection(int(currentDirection)-1);
}





