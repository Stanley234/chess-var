#pragma once
#include <iostream>
#include <vector>
#include "movement.hpp"

class Figure{

public:
    Figure();
    Figure(int);
    Figure(int, int);
    Figure(int, int, int);

    void setValue(int);
    void setPosition(int);
    void setSide(int);

    int getValue();
    int getPosition();
    int getSide();

    void addMove(Movement);
    void calcMove();

    void debugPrint();

private:
    int pos;
    int val;
    int side;

    std::vector<Movement> legal_move;
};