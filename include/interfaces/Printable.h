#ifndef PRINTABLE_H
#define PRINTABLE_H
#include <iostream>

class Printable {
    friend std::ostream &operator<<(std::ostream &os, const Printable &printable);
protected:
    virtual void print(std::ostream &os) const = 0;
    
};
#endif