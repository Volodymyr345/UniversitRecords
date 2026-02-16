#include "University.h"
bool University::add_student(int age, const std::string&name, const std::string& course,const std::string &professorsName){
    for(auto &a: professor_students){
        if(check_if_exists(a.first, professorsName)){      // if Professor's name is exists then we can push student
            a.second->push_back(std::make_shared <Student>(age, name, course));
            return true;
        }
    }
    return false;
}

bool University::add_professor(int age, const std::string &name, const std::string &subjectName){ //here the program checks will be checking the professor's name if he is already exists.
    professor_students.emplace(Professor(age, name, subjectName), std::make_unique<std::vector<std::shared_ptr<Student>>>());
    return true;
}

bool University::check_if_exists(const Person &first, const std::string &text) {
    return first.get_name() == text;
}

void University::print(const Printable& person) const {
    std::cout << person;
}

void University::print_professors_students() const {
    for(const auto & prof_stud : professor_students){
        print(prof_stud.first); //printing professor
        for(const auto & student : *(prof_stud.second)){
            print(*student); //printing students
        }
    }
}



