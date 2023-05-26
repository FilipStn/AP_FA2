#include <iostream>
#include "Pallet.cpp"
#include "include/Shelf.hpp"
#include "include/IContainer.hpp"


 

// Shelf::Shelf(){
//     for (int i = 0; i < pallets.size(); i++)
//     {
//         pallets[i] = Pallet();
//     }
    
// };

bool Shelf::swapPallet(int slot, int slot2){
    Pallet pallet1 = pallets[slot];

    pallets[slot] = pallets[slot2];
    pallets[slot2] = pallet1;
    return true;
};

bool Shelf::isEmpty(){
    for (Pallet p : pallets){
        if (!p.isEmpty())
        {
            return false;
        }
        
    }
    return true;
}

bool Shelf::isFull(){
    for (Pallet p : pallets){
        if (!p.isFull())
        {
            return false;
        }
        
    }
    return true;
}