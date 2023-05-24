#pragma once
#include <iostream>

class IContainer {
public:
    bool virtual isEmpty() = 0;
    bool virtual isFull() = 0;
};