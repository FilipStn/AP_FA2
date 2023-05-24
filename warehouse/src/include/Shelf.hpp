#pragma once
#include <iostream>
#include "Pallet.hpp"
#include "IContainer.hpp"

class Shelf : public IContainer{
public: 
    std::array<Pallet, 4> pallets;

    Shelf();
    bool swapPallet(int slot, int slot2);
    
    bool virtual isEmpty();
    bool virtual isFull();
};