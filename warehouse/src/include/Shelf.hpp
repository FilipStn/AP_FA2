#pragma once
#include <iostream>
#include "Pallet.hpp"

class Shelf {
public: 
    std::array<Pallet, 4> pallets;

    Shelf();
    bool swapPallet(int slot, int slot2);
    
};