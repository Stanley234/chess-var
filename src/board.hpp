#pragma once

#define BOARD_LENGTH 8
#define BOARD_WIDTH BOARD_LENGTH
#define BOARD_SIZE BOARD_LENGTH*BOARD_WIDTH

#include <cstdint>
#include "figure.hpp"


class Board{

public:
    Board();

    Figure& getFigure(uint8_t idx){ return p_board[idx]; }
    void setFigure(uint8_t idx, Figure fig){ p_board[idx] = fig; }

private:
    // Using as 1 dim array to prevent overly complex pointers
    Figure p_board[BOARD_SIZE];
};