#include "board.hpp"

Board::Board(){

    for (size_t i = 0; i < BOARD_SIZE; i++)
    {
        p_board.at(i) = Figure{i};
    }
    
}

Board::~Board(){

}

Figure& Board::getFigure(int idx){
    return p_board.at(idx);
}
void Board::setFigure(int idx, Figure fig){

    p_board.at(idx) = fig;
}

void Board::moveFigure(int start, int finish){

    p_board.at(finish) = p_board.at(start);
    p_board.at(start) = Figure{start};

}



void Board::debugPrint(){
    std::cout << "BOARD:"<<std::endl;
    
    for (size_t i = 0; i < BOARD_SIZE; i++)
    {
        std::cout << "#" << i << ":\t";
        p_board.at(i).debugPrint();
        std::cout << std::endl;
    }

}