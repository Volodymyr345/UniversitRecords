#ifndef ACTIONMANAGER_H
#define ACTIONMANAGER_H
#include "University.h"
#include <string>
#include <iostream>
#include <optional>
class ActionManager {
    private:
        struct inputPerson {
            int age;
            int grade;
            std::string name;
            std::string compare_name;
            std::string subjectName;
            std::string courseName;
        };
        
        enum class Command : char {
            ADD_STUDENT = 's',
            ADD_PROFESSOR = 'f',
            ADD_STUD_SUBJECT = 'a',
            SET_GRADE = 'g',
            PRINT_STUD_PROF = 'p',
            QUIT = 'q',
            INCORRECT_DATA = 'i',
        };
        void input(Command &command);
        std::optional<Command> choose_command(char c);
        
        inputPerson inputpers;
        University uni;
    
    public:
    
        
        void do_action(char c);
        
        void print_option();





};


#endif