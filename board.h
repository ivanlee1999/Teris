#pragma once
#include"raylib.h"
#include<vector>
#include"vec2.h"

class Board
{
public:
    Board(Vec2<int> screenPos, Vec2<int> screenSize, int cellSize, int padding);
    // Board(Board &&) = default;
    // Board(const Board &) = default;
    // Board &operator=(Board &&) = default;
    // Board &operator=(const Board &) = default;
    // ~Board();
    void SetCell(Vec2<int> cellPos, Color c);
    void DrawCell(Vec2<int> cellPos) const;
    void DrawWholeBoard() const;
    void DrawBorder() const;
    

private:
    class Cell
    {
    public:
        Cell();
        // Cell(Cell &&) = default;
        // Cell(const Cell &) = default;
        // Cell &operator=(Cell &&) = default;
        // Cell &operator=(const Cell &) = default;
        // ~Cell();
        void SetColor(Color);
        Color GetColor() const;

    private:
        bool Exist;
        Color c;
    };

    //Board Property
    std::vector<Cell> cells;
    Vec2<int> screenSize;
    const int cellSize;
    const int padding;
    Vec2<int> screenPos;
};

