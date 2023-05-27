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
    // return the remaining space by subtracting capacity by count
    return itemCapacity - itemCount;
}

bool Pallet::reallocateEmptyPallet(std::string name, int capacity){
    // if item count is bigger than 0, break out of fuction and return false
    if (itemCount > 0) 
    {
        return false;
    }
    // else set new name, capacity and return true
    else
    {
        itemName = name;
        itemCapacity = capacity;
        return true;
    }
    
}

bool Pallet::takeOne(){
    // take one from a pallet by itemcount minus 1
    return itemCount - 1;
}

bool Pallet::putOne(){
    // put one on a pallet by itemcount plus 1
    return itemCount + 1;
};

bool Pallet::isEmpty(){
    // if itemcount is equal to 0, pallet is empty. return true
    if (itemCount == 0)
    {
        return true;
    }
    // else return false
    else
    {
        return false;
    }
    
}

bool Pallet::isFull(){
    // if itemcapacity is equal to itemcount, pallet is full. return true
    if (itemCapacity == itemCount)
    {
        return true;
    }
    // else return false
    else
    {
        return false;
    }
}