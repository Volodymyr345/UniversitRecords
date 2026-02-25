#include "ActionManager.h"

std::optional<ActionManager::Command> ActionManager::choose_command(char c) {
    switch(c){
        case 's':
            return Command::ADD_STUDENT;
        case 'f':
            return Command::ADD_PROFESSOR;
        case 'a':
            return Command::ADD_STUD_SUBJECT;
        case 'g':
            return Command::SET_GRADE;
        case 'p':
            return Command::PRINT_STUD_PROF;
        case 'q':
            return Command::QUIT;
        default:
            return Command::INCORRECT_DATA;
    }
}



void ActionManager::do_action(char c) {

    std::cout << std::boolalpha;

    auto command = choose_command(c); 
    
    if(*command != Command::PRINT_STUD_PROF && *command != Command::QUIT && *command != Command::INCORRECT_DATA)
        input(*command);
    switch(*command){
        case Command::ADD_STUDENT:
            uni.add_student(inputpers.age, inputpers.name, inputpers.courseName);
            break;
        case Command::ADD_PROFESSOR:
            uni.add_professor(inputpers.age, inputpers.name, inputpers.subjectName);
            break;
        case Command::ADD_STUD_SUBJECT:
            uni.add_stud_subj(inputpers.subjectName, inputpers.name);
            break;
        case Command::SET_GRADE:
            uni.set_grade(inputpers.name, inputpers.compare_name, inputpers.grade);
            break;
        case Command::PRINT_STUD_PROF:
            uni.print_professors_students();
            break;
        case Command::QUIT:
            std::cout << "Goodbye!" << std::endl;
            break;
        default:
            std::cout << "incorrect choice" << std::endl;
    }
}

void ActionManager::input(Command &command) {

    std::cout << "Enter name: ";
    std::cin >> inputpers.name;
    
    if(command == Command::ADD_STUDENT || command == Command::ADD_PROFESSOR) {
        
        std::cout << "Enter age: ";
        std::cin >> inputpers.age;
    }
    if(command == Command::ADD_STUDENT) {
        std::cout << "Enter course: ";
        std::cin >> inputpers.courseName;
    }
    else if(command == Command::ADD_PROFESSOR) {
        std::cout << "Enter subject: ";
        std::cin >> inputpers.subjectName;
    }
    else if(command == Command::ADD_STUD_SUBJECT){
        std::cout << "Enter subject: ";
        std::cin >> inputpers.subjectName;
    }
    else if(command == Command::SET_GRADE) {
        std::cout << "Enter Professor's name: ";
        std::cin >> inputpers.compare_name;
        std::cout << "Enter grade: ";
        std::cin >> inputpers.grade;
    }
}


void ActionManager::print_option() {
    std::cout << "Enter your choice: " <<std::endl 
        << "s - add student" << std::endl
        << "f - add professor" << std::endl 
        << "a - add a subject to student" << std::endl 
        << "g - set grade" << std::endl 
        << "p - print students and professors" << std::endl 
        << "q - quit" << std::endl;
}