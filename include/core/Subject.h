#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>
class Subject {
    private:
        std::string subject_name;
        int grade;
    public:
        Subject(const std::string &name, int grade);
        int get_grade();
};
#endif