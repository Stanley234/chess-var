#pragma once
#include <iostream>
#include <array>
#include <vector>
#include "figure.hpp"
#include "board.hpp"

class Movetypes{
public:
    Movetypes();
    Movetypes();
    Movement calculateMove(Figure, std::array<Figure, BOARD_SIZE>);
    
private:

    std::array<Figure, BOARD_SIZE> localBoard;

};