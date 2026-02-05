#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Professor.h"
#include "Student.h"
#include <vector>
#include <string>
#include <memory>
class University {
    private:
        std::unique_ptr<std::vector<std::shared_ptr<Student>>> students{};
    public:
        bool add_students();

};
#endif