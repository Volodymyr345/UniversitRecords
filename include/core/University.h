#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Professor.h"
#include "Student.h"
#include "Printable.h"
#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <memory>
class University {
    private:
        std::map<Professor, std::unique_ptr<std::vector<std::shared_ptr<Student>>>> professor_students;
    public:
        void print(const Printable &person) const;
        
        void print_professors_students() const;
        
        bool add_professor(int age, const std::string &name, const std::string &subjectName);
        
        bool add_student(int age, const std::string&name, const std::string& course,const std::string &professorsName);

        bool set_grade (std::string& studentName, std::string& professorName,  int grade);
        
        bool check_if_exists(const Person &first,const std::string &text);

        bool add_stud_subj(std::string &subjectName, std::string &studentName);
};
#endif