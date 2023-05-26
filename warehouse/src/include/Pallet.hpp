#pragma once
#include <iostream>
#include "IContainer.hpp"

class Pallet : public IContainer {
private: 
    int itemCount;
    std::string itemName;
    int itemCapacity;

public:
    Pallet(std::string itemName, int itemCapacity, int itemCount);
    Pallet();

    std::string getitemName();
    int getItemCount();
    int getRemainingSpace();
    bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
    bool takeOne();
    bool putOne();

    bool isEmpty();
    bool isFull();

};