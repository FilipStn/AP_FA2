#include <iostream>
#include "include/Pallet.hpp"
#include "include/IContainer.hpp"


Pallet::Pallet(std::string name, int capacity, int count) {
// set variables to given constr
   itemName = name;
   itemCapacity = capacity;
   itemCount = count;
}

Pallet::Pallet(){
    // set variables to minimum
    itemName = "";
    itemCapacity = 1;
    itemCount = 0;
}

std::string Pallet::getitemName(){
    // get itemname from the pallet
    return itemName;
}

int Pallet::getItemCount(){
    // get itemcount from the pallet
    return itemCount;
}

int Pallet::getRemainingSpace(){
    return itemCapacity - itemCount;
}

bool Pallet::reallocateEmptyPallet(std::string name, int capacity){
    if (itemCount > 0) 
    {
        return false;
    }
    else
    {
        itemName = name;
        itemCapacity = capacity;
        return true;
    }
    
}

bool Pallet::takeOne(){
    return itemCount - 1;
}

bool Pallet::putOne(){
    return itemCount + 1;
};

bool Pallet::isEmpty(){
    if (itemCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool Pallet::isFull(){
    if (itemCapacity == itemCount)
    {
        return true;
    }
    else
    {
        return false;
    }
}