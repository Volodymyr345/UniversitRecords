#ifndef PERSON_H
#define PERSON_H
#include "Printable.h"
class Person : 
    public Printable {
        private:
            int age;
            std::string name;
        public:
            Person(int age,const std::string &name);

};

#endif