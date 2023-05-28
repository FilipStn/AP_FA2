#include <iostream>
#include "include/Pallet.hpp"
#include "include/Shelf.hpp"
#include "include/IContainer.hpp"


 
// create shelf
Shelf::Shelf(){
};

bool Shelf::swapPallet(int slot, int slot2){
    // placeholder variable for one slot
    Pallet pallet1 = pallets[slot];

    // first swap slot with two
    pallets[slot] = pallets[slot2];
    // then slot 2 with placeholder variable
    pallets[slot2] = pallet1;

    return true;
};

bool Shelf::isEmpty(){
    // check if shelf is empty

    // loop through pallets
    for (Pallet p : pallets){
        // if p is not empty, break out of function by returning false
        if (!p.isEmpty())
        {
            return false;
        }
    // else return true
    }
    return true;
}

bool Shelf::isFull(){
    // check if shelf is full

    // loop through pallets
    for (Pallet p : pallets){
        // if pallet is full, break out of function by returning false
        if (!p.isFull())
        {
            return false;
        }
    // else return true
    }
    return true;
}