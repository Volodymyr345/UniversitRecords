#include "Student.h"
Student::Student(int age, const std::string &name, const std::string &course) : 
    Person(age, name), course{course} {
}

void Student::print(std::ostream &os) const {
    
}