#ifndef PERSON_H
#define PERSON_H
#include "Printable.h"
class Person : 
    public Printable {
        protected:
            int age;
            std::string name;
        public:
            Person(int age,const std::string &name);
            std::string get_name() const;

};

#endif