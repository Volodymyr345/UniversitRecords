
#include <iostream>
#include <string>
#include <iomanip>
#include "ActionManager.h"

int main()
{
    ActionManager actMan;
    char choice;
    std::cout << std::endl << std::left << std::setw(15) << " "
    << std::right << std::setw(20) << "UNIVERSITY MANAGMENT SYSTEM" << std::endl;
    do{
        actMan.print_option();
        std::cin >> choice;
        actMan.do_action(choice);
    }while(choice != 'q');
    
    
}
