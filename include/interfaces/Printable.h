#ifndef PRINTABLE_H
#define PRINTABLE_H
#include <iostream>

class Printable {
    friend std::ostream &operator<<(std::ostream &os, Printable &printable);
protected:
    void print(std::ostream &os);
    
};
#endif