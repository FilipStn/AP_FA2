#pragma once
#include <iostream>

class Employee {
private:
    const std::string name;
    bool busy;
    bool forkliftCertificate;

public:
    Employee(){}
    Employee(const std::string name, bool forkliftCertificate):
        name(name),
        forkliftCertificate(forkliftCertificate),
        busy(false)
        {}

    std::string getName();
    bool getBusy();
    void setBusy(bool busy);
    bool getForkliftCertificate();
    void setForkliftCertificate(bool forkliftcertificate);
};