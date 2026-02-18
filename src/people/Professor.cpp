#include "Professor.h"

Professor::Professor(int age,const std::string &name,const std::string &subjectName) :
    Person(age, name), subjectName{subjectName}{

}


//an instance of a Professor can set a greade for particular subject,

bool Professor::set_grade(std::shared_ptr<Student> &student, int grade) const{
    std::vector<std::shared_ptr<Subject>> &subjects = (*student).subjects; 
    for(const std::shared_ptr<Subject>& subject : subjects){
        if(subject->get_subjectName() == subjectName) {
            subject->set_grade(grade);
            return true;
        }
    }
    return false;
}

//printing Professor instance

void Professor::print(std::ostream &os) const{
    os << "===========================" << std::endl;
    os << "Professor" << std::endl;
    os << "Name: " << name << std::endl;
    os << "Age: " << age << std::endl;
    os << "Subject: " << subjectName << std::endl;
    os << "===========================" << std::endl;
}