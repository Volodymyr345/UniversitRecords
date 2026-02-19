#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <memory>
#include <string>
#include <iostream>
#include "Subject.h"
#include "Person.h"
class Professor : 
    public Person {
private:
    std::string subjectName;
public:
    Professor(int age, const std::string &name,const std::string &subjectName);
    bool set_grade(std::shared_ptr<Subject> subject, int grade);

    //printing Professor instance fields...
    void print(std::ostream &os)const override final;
    
    bool operator<(const Professor &other) const;
};

#endif