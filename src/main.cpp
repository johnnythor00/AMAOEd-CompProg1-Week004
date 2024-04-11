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
    double dailyBudget;

    // Prompt the user to enter their daily budget
    std::cout << "Enter your daily budget: $";
    std::cin >> dailyBudget;

    // Calculate the product of the daily budget and itself
    double product = dailyBudget * dailyBudget;
    double userInput = dailyBudget;

    // Display the result
    std::cout << "Product of daily budget: $" << product << std::endl;
    return 0;
}

