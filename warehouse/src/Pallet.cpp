#pragma once
#include <iostream>
#include "include/Pallet.hpp"

Pallet::Pallet(std::string name, int capacity, int count) {
   std::string itemName = name;
   int itemCapacity = capacity;
   int itemCount = count;
}

Pallet::Pallet(){

}

std::string Pallet::getitemName(){
    return itemName;
}

int Pallet::getitemCount(){
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
        std::string itemName = name;
        int itemCapacity = capacity;
    }
    
}

bool Pallet::takeOne(){
    return itemCount - 1;
}

bool Pallet::putOne(){
    return itemCount + 1;
};