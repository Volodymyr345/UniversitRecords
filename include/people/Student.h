#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include "Subject.h"
#include "Person.h"
class Student : 
    public Person{
    private:
        std::string course;
        std::vector <std::shared_ptr<Subject>> subjects{};
    public:
        Student(int age, const std::string &name, const std::string &course);
        
        void print(std::ostream &os) const override final;
        
        bool add_subjects();

};

#endif