#include <iostream>
#include "include/Warehouse.hpp"

Warehouse::Warehouse(){
    // set the vectors for the warehouse
    this -> Employees = {};
    this -> shelves = {};
}

void Warehouse::addEmployee(Employee employee){
    // add the newest employee to the end of the vector
   Employees.push_back(employee);

}


void Warehouse::addShelf(Shelf shelf){
    // add the newest shelf to the end of the vector
    shelves.push_back(shelf);
}


bool Warehouse::rearrangeShelf(Shelf& Shelf){
    // this function rearranges the shelf

    // keep track if an employee is free
    bool free_employee = false;
    
    // loop through the list of employees
    for (Employee employee : Employees){
        //if the employee doesn't have a certificate and is busy employee is false
        if (!employee.getForkliftCertificate() || employee.getBusy())
        {
            free_employee = false;
        }
        else
        {
            free_employee = true;
        }
    }
    // keep track of the changes
    bool flag = true;
    // when employee is free go to the while loop
    if (free_employee)
    {
        // enter while loop with condition flag
        while (flag)
        // set flag to false
        {flag = false;
        // from index 0 to size of pallets - 1
        for (int i = 0; i < Shelf.pallets.size() - 1; i++)
        {   
            // if pallets index 'i' is bigger than pallets index 'i + 1', swapPallet
            if (Shelf.pallets[i].getItemCount() > Shelf.pallets[i + 1].getItemCount())
            {
                Shelf.swapPallet(i, i + 1);
                // set flag to true
                flag = true;
            }
        // when done, return true
        return true;
        }   
    }
    
   
}
}


bool Warehouse::pickItems(std::string name, int count){
    // this functions picks items with the ammount 'count' 

    // for counting if there is enough items to pick
    int item_count = 0;

    // loop through vector 'shelves'
    for (Shelf& shelf : shelves)
    {   
        // then loop through 'shelf' to get the pallets
        for (Pallet& pallet : shelf.pallets)
        {   
            // if the itemname on the pallet is the same as 'name'
            if (pallet.getitemName() == name)
            { 
                // add the itemcount on the pallet to the variable
                item_count += pallet.getItemCount();
            }
        }
    }
    // if 'item_count' is bigger than count go in de loop
    if (item_count >= count)
    {
        // loop through vector 'shelves'
        for (Shelf& shelf : shelves)
        {
            // then loop through 'shelf' to get the pallets
            for (Pallet& pallet : shelf.pallets)
            {   
                // if 'itemname' and 'name' are the same and the pallet is not empty, enter while loop
                if (pallet.getitemName() == name && !pallet.isEmpty())
                {
                    // while pallet itemcount is bigger than 0, keep taking one
                    while (pallet.getItemCount() > 0)
                    {
                        pallet.takeOne();
                    }    
                }
            }
            // when done, return true
            return true;
        }
    }
    // if al the above is not possible, return false
    else
    {
        return false;
    }
    
    
    
    
}