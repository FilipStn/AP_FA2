#pragma once
#include <iostream>
#include "Pallet.hpp"
#include "IContainer.hpp"
#include <array>


class Shelf : public IContainer{
public: 
    std::array<Pallet, 4> pallets;

    Shelf():
        pallets({Pallet(),Pallet(),Pallet(),Pallet()}){}
    bool swapPallet(int slot, int slot2);
    
    bool virtual isEmpty();
    bool virtual isFull();
};