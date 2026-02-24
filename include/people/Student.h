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
        friend class Professor;
    private:
        std::string courseName;
        std::vector <std::shared_ptr<Subject>> subjects{};
    public:
        Student(int age, const std::string &name, const std::string &courseName);

        void print(std::ostream &os) const override final;
        
        size_t get_amount_subjects() const;
        bool add_subjects(std::string subjectName);

};

#endif