#include "Person.h"
Person::Person(int age,const std::string &name) : 
    age{age}, name{name} {

}


std::string Person::get_name() const{
    return name;
}