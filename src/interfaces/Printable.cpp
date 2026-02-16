#include "Printable.h"
std::ostream& operator<<(std::ostream &os,const Printable &printable){
    printable.print(os);
    return os;
}

