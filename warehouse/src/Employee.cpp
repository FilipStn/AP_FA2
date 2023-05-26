#include <iostream>
#include "include/Employee.hpp"

// Employee::Employee(std::string benaming, bool certificate){
//     // const is weggehaald, mocht van david, is sowieso const omdat er geen setter is
//     name = benaming;
//     forkliftCertificate = certificate;
// }

std::string Employee::getName(){
    return name;
};

bool Employee::getBusy(){
    return busy;
};

void Employee::setBusy(bool bezig){
    busy = true;
};

bool Employee::getForkliftCertificate(){
    return forkliftCertificate;
};

void Employee::setForkliftCertificate(bool forkliftcertificate){
    forkliftCertificate = true;
};