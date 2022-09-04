#include"board.h"
#include "Settings.h"
#include "raylib.h"

Board::Cell::Cell() : Exist(false), c(WHITE){};

void Board::Cell::SetColor(Color c_in){
    c = c_in;
    Exist = true;
};

Color Board::Cell::GetColor() const{
    return c;
}

Board::Board(Vec2<int> Pos, Vec2<int> Size, int cellSize_in, int padding_in)
: screenPos(Pos), screenSize(Size), cellSize(cellSize_in), padding(padding_in)
{
    cells.resize(screenSize.getY() * screenSize.getY());
};

void Board::SetCell(Vec2<int> cellPos, Color c_in){
    cells[cellPos.getY() * screenSize.getX() + cellPos.getX()].SetColor(c_in);
}

void Board::DrawCell(Vec2<int> cellPos) const{
    Color c = this->cells[cellPos.getY() * screenSize.getX() + cellPos.getX()].GetColor();
    Vec2<int> cellPosInBoard = screenPos + padding ;
    DrawRectangle(screenPos.getX() + cellPos.getX() * cellSize + padding, screenPos.getY() + cellPos.getY() * cellSize + padding, cellSize-padding, cellSize - padding, c);
}

void Board::DrawWholeBoard() const{
    for(int x = 0; x != screenSize.getX(); x++){
        for(int y = 0; y != screenSize.getY(); y++){
            DrawCell(Vec2(x,y));
        }
    }
    DrawBorder();
}

void Board::DrawBorder() const{
    DrawRectangleLinesEx({settings::boardStartingPos.getX() - settings::cellLength/2.0, settings::boardStartingPos.getY() -settings::cellLength/2., settings::boardSize.getX()*settings::boardSize.getX() + settings::cellLength, settings::boardSize.getY()*settings::cellLength + settings::cellLength}, settings::cellLength/2.0 , YELLOW);

}
