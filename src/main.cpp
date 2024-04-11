/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////


int main() {
    std::string name, password, address;

    // Prompt the user to enter their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Prompt the user to enter their password
    std::cout << "Enter your password: ";
    std::getline(std::cin, password);

    // Prompt the user to enter their address
    std::cout << "Enter your address: ";
    std::getline(std::cin, address);

    // Display the user's information with the specified format
    std::cout << "Hi, I am " << name << ". I live at " << address << "." << std::endl;

    return 0;
}

