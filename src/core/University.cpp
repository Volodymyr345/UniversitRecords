#include "University.h"

bool University::add_student(int age, const std::string&studentName, const std::string& course){
    for(std::shared_ptr<Student> &student : students)
        if(check_if_exists(*student, studentName)){
            return false;
        }
    
    students.push_back(std::make_shared<Student>(age, studentName, course));
    return true;
}



bool University::add_professor(int age, const std::string &professorName, const std::string &subjectName){ //here the program checks will be checking the professor's name if he is already exists.
    for(const auto & prof_stud : professor_students) {
        if(check_if_exists(prof_stud.first, professorName)) return false;
    }   
    
    professor_students.emplace(Professor(age, professorName, subjectName), std::make_unique<std::vector<std::shared_ptr<Student>>>());
    return true;
}

bool University::add_stud_subj(std::string &subjectName, std::string &studentName) {
    size_t num{};
    std::shared_ptr<Student> temp_student;
    
    for(std::shared_ptr<Student> & student : students) {
        if(check_if_exists(*student, studentName)){
            temp_student = student;
            break;
        }
        num++;
    }
    if(temp_student == nullptr){
        return false;
    }
    

    for(auto & prof_student : professor_students) {
        if(prof_student.first.get_subject_name() == subjectName) {
            for (const std::shared_ptr<Student> & exist_student : (*prof_student.second))
                if(!check_if_exists(*temp_student, *exist_student))
                    return false;
            
            (*temp_student).add_subjects(subjectName);
            (*prof_student.second).push_back(temp_student);
            return true;
            }
        }
    return false;
}

bool University::set_grade (std::string& studentName, std::string& professorName,  int grade) {
    for(const auto & prof_stud: professor_students){
        if(check_if_exists(prof_stud.first, professorName))
            for(auto &student : (*prof_stud.second)){
                if(check_if_exists(*student, studentName)){
                    return prof_stud.first.set_grade(student, grade);
                }
            }
    }
    return false;
}




bool University::check_if_exists(const Person &person, const std::string &text) { return person.get_name() == text; }

bool University::check_if_exists(const Person &person, const Person &sec_person) { return person.get_name() == sec_person.get_name(); }

void University::print_professors_students() const {
    
    for(const auto & prof_stud : professor_students){
        std::cout << prof_stud.first; //printing professor
        for(const auto & student : *(prof_stud.second)){
            std::cout << *student; //printing students
        }
    }
    std::cout << "Students without subjects: " << std::endl;
    std::cout << "_____________________________" << std::endl;
    for(const auto & student : students){
        if((*student).get_amount_subjects() == 0){
            std::cout << *student;
        }
    }
    std::cout << "_____________________________" << std::endl;
}



