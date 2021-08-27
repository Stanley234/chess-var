#pragma once
#include <iostream>
#include <cstdint>

class Figure{

public:
    Figure();
    Figure(uint8_t);

    void debug_print();

private:
    uint8_t pos;
    uint8_t val;
};