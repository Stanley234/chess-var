#pragma once
#include <iostream>


class Movement{
public:
    Movement(int);
    
    void debugPrint();

private:
    int destination;
    int reach;

};