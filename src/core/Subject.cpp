#include "Subject.h"

Subject::Subject(const std::string &subjectName, int grade) :
    subjectName {subjectName}, grade {grade} {

}

void Subject::set_grade(int grade) {
    this->grade = grade;
}

int Subject::get_grade() {
    return grade;
}

std::string Subject::get_subjectName() {
    return subjectName;
}