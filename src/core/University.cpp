#include "University.h"
bool University::add_student(int age, const std::string&studentName, const std::string& course, const std::string &professorName){
    for(auto & prof_stud: professor_students){
        if(check_if_exists(prof_stud.first, professorName)){      // if Professor's name is exists then we can push student
            for(auto & student: *(prof_stud.second)){
                if(check_if_exists(*student, studentName)) return false;
            }
            prof_stud.second->push_back(std::make_shared <Student>(age, studentName, course));
            return true;
        }
    }
    return false;
}

bool University::add_professor(int age, const std::string &professorName, const std::string &subjectName){ //here the program checks will be checking the professor's name if he is already exists.
    for(const auto & prof_stud : professor_students) {
        if(check_if_exists(prof_stud.first, professorName)) return false;
    }   
    
    professor_students.emplace(Professor(age, professorName, subjectName), std::make_unique<std::vector<std::shared_ptr<Student>>>());
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
        std::cout << prof_stud.first; //printing professor
        for(const auto & student : *(prof_stud.second)){
            std::cout << *student; //printing students
        }
    }
}



