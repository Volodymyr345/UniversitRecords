#include "Professor.h"

Professor::Professor(int age,const std::string &name,const std::string &subjectName) :
    Person(age, name), subjectName{subjectName}{

}


bool Professor::set_grade(std::shared_ptr<Subject> subject, int grade) {
    if(subject->get_subjectName() == subjectName) {
        subject->set_grade(grade);
        return true;
    }
    return false;
}


void Professor::print(std::ostream &os) const{
    os << "===========================" << std::endl;
    os << "Professor" << std::endl;
    os << "Name: " << name << std::endl;
    os << "Age: " << age << std::endl;
    os << "Subject: " << subjectName << std::endl;
    os << "===========================" << std::endl;
}