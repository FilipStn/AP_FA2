#include <iostream>
#include "include/Warehouse.hpp"


void Warehouse::addEmployee(Employee employee){
   Employees.push_back(employee);

}

void Warehouse::addShelf(Shelf shelf){
    shelves.push_back(shelf);
}

bool Warehouse::rearrangeShelf(Shelf& Shelf){
    bool free_employee = false;
    
    for (Employee employee : Employees){
    
        if (!employee.getForkliftCertificate() || employee.getBusy())
        {
            free_employee = false;
        }
        else
        {
            free_employee = true;
        }
    }

    bool flag = true;
    if (free_employee)
    {
         while (flag)
        {flag = false;
        for (int i = 0; i < Shelf.pallets.size() - 1; i++)
        {
            if (Shelf.pallets[i].getitemCount() > Shelf.pallets[i + 1].getitemCount())
            {
                Shelf.swapPallet(i, i + 1);
                flag = true;
            }
        
        return true;
        }   
    }
    
   
}
}


bool Warehouse::pickItems(std::string name, int count){
    int item_count = 0;

    for (Shelf& shelf : shelves)
    {
        for (Pallet& pallet : shelf.pallets)
        {   
            if (pallet.getitemName() == name)
            {
                item_count += pallet.getitemCount();
            }
        }
    }

    if (item_count >= count)
    {
        for (Shelf& shelf : shelves)
        {
            for (Pallet& pallet : shelf.pallets)
            {   
                if (pallet.getitemName() == name && !pallet.isEmpty())
                {
                    while (pallet.getitemCount() > 0)
                    {
                        pallet.takeOne();
                    }    
                }
            }
            return true;
        }
    }
    else
    {
        return false;
    }
    
    
    
    
}