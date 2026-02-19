#include "Student.h"
Student::Student(int age, const std::string &name, const std::string &course) : 
    Person(age, name), course{course} {
}

bool Student::add_subjects(std::string subjectName) {
    for(std::shared_ptr<Subject> & subj : subjects)
        if((*subj).get_subjectName() == subjectName)
            return false;
    subjects.push_back(std::make_shared <Subject>(subjectName));
    
    return true;
}


void Student::print(std::ostream &os) const {
    os << "===========================" << std::endl;
    os << "Student" << std::endl;
    os << "Name: " << name << std::endl;
    os << "Age: " << age << std::endl;
    os << "Course: " << course << std::endl;
    os << "Subjects: "<< std::endl;
    os << "---------------------------" << std::endl;
    for(const std::shared_ptr<Subject> &subject : subjects){
        os << "Subject name: " << (*subject).get_subjectName() << std::endl;
        os << "Grade: " << (*subject).get_grade() << std::endl;
    }
    os << "---------------------------" << std::endl;
    os << "===========================" << std::endl;
}