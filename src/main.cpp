
#include <iostream>
#include <string>

#include "University.h"



int main(int argc, char const *argv[])
{
    University university;

    std::string prof_name = "Volodymyr";

    std::string stud_name = "Yura";

    std::string subject = "Math";

    std::string course = "Computer Science";

    university.add_professor(28, prof_name, subject);

    

    university.add_student(20, stud_name, course, prof_name);
    
    
    //university.print_professors_students();

    university.add_stud_subj(subject, stud_name);

    //university.print_professors_students();

    university.set_grade(stud_name, prof_name, 12);

    stud_name = "Stepan";


    university.add_student(23, stud_name, course, prof_name);

    university.add_stud_subj(subject, stud_name);


    
    //university.print_professors_students();

    prof_name = "Veniamin";

    subject = "Physics";

    university.add_professor(28, prof_name, subject);



    
    
    
    university.print_professors_students();
     
    

    
}
