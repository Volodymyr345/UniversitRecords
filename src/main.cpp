
#include <iostream>
#include <string>
#include "ActionManager.h"

int main(int argc, char const *argv[])
{
    ActionManager actMan;
    char choice;
    do{
        actMan.print_option();
        std::cin >> choice;
        actMan.do_action(choice);
    }while(choice != 'q');
    

    
}
