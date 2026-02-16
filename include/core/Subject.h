#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>
class Subject {
    
    private:
        std::string subjectName;
        int grade;
    public:
    Subject(const std::string &subjectName, int grade = 0);
        
    void set_grade(int grade);
    int get_grade();
    std::string get_subjectName();
};
#endif