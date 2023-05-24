// #pragma once
#include <iostream>
#include "include/Warehouse.hpp"
#include "include/Employee.hpp"
#include "include/Shelf.hpp"

Warehouse::Warehouse(){

}

void Warehouse::addEmployee(Employee employee){
   Employees.push_back(employee);

}

void Warehouse::addShelf(Shelf shelf){
    Shelves.push_back(shelf);
}

bool Warehouse::rearrangeShelf(Shelf& Shelf){
    
}

bool Warehouse::pickItems(std::string name, int count){

}