#pragma once
#include <iostream>
#include <vector>
#include "movement.hpp"

class Figure{

public:
    Figure();
    Figure(int);
    Figure(int, int);


    void setValue(int);
    void setPosition(int);

    void addMove(Movement);
    void calcMove();


    void debugPrint();

private:
    int pos;
    int val;

    std::vector<Movement> legal_move;
};