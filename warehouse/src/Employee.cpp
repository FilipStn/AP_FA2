#include <iostream>
#include "include/Employee.hpp"

Employee::Employee(std::string benaming, bool certificate){
    // const is weggehaald, mocht van david, is sowieso const omdat er geen setter is
    
    // variables are being set.
    name = benaming;
    forkliftCertificate = certificate;
}

std::string Employee::getName(){
    // return name from employee
    return name;
};

bool Employee::getBusy(){
    // gives busy status
    return busy;
};

void Employee::setBusy(bool bezig){
    // sets 'busy' status to true
    busy = true;
};

bool Employee::getForkliftCertificate(){
    // return if employee has forkliftcertificate or not
    return forkliftCertificate;
};

void Employee::setForkliftCertificate(bool forkliftcertificate){
    // sets forkliftcertificate status to true
    forkliftCertificate = true;
};