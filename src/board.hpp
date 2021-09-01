#pragma once

#define BOARD_LENGTH 8
#define BOARD_SIZE BOARD_LENGTH*BOARD_LENGTH

#include <iostream>
#include <array>
#include "figure.hpp"


class Board{

public:
    Board();
    ~Board();

    Figure& getFigure(int);
    void setFigure(int, Figure);

    void moveFigure(int,int);
    void debugPrint();
private:
    // Using as 1 dim array to prevent overly complex pointers
    std::array<Figure, BOARD_SIZE> p_board;
};