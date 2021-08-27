#include "figure.hpp"

void Figure::debug_print(){
    std::cout << "pos:" << pos << "  - val:" << val;
}

Figure::Figure(){
    pos = 0;
    val = 0;
}

Figure::Figure(uint8_t v){
    pos = 0;
    val = v;
}