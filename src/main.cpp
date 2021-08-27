#include <iostream>
#include "board.hpp"

int main(){

    Board board;
    for (size_t i = 0; i < BOARD_SIZE; i++)
    {
        std::cout << i << ": ";
        board.getFigure(i).debug_print();
        std::cout << std::endl;
    }

    return 0;
}