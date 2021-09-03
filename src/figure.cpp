#include "figure.hpp"

void Figure::debugPrint(){
    std::cout << "pos:\t" << pos << "\tval:\t" << val;
}

Figure::Figure(){
    pos = 0;
    val = 0;
    side = 0;
}

Figure::Figure(int p){
    pos = p;
    val = 0;
    side = 0;
}

Figure::Figure(int p, int v){
    pos = p;
    val = v;
    side = 0;
}

Figure::Figure(int p, int v, int s){
    pos = p;
    val = v;
    side = s;
}

void Figure::setValue(int v){
    val = v;
}

void Figure::setPosition(int p){
    pos = p;
}

void Figure::setSide(int s){
    side = s;
}

int Figure::getValue(){
    return val;
}

int Figure::getPosition(){
    return pos;
}

int Figure::getSide(){
    return side;
}