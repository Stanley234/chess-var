#include "figure.hpp"

void Figure::debugPrint(){
    std::cout << "pos:\t" << pos << "\tval:\t" << val;
}

Figure::Figure(){
    pos = 0;
    val = 0;
}

Figure::Figure(int p){
    pos = p;
    val = 0;
}

Figure::Figure(int p, int v){
    pos = p;
    val = v;
}

void Figure::setValue(int v){
    val = v;
}

void Figure::setPosition(int p){
    pos = p;
}