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



    //User Information..


    std:string studentName, programCourse, yearName;
    int yearLevel;

    double numberOfUnits, ratePerUnit, tuitionFee, downPayment, balance;


    std::cout << "Student Name: ";
    std::getline(std::cin, studentName);

    std::cout << "Program/Course: ";
    std::getline(std::cin, programCourse);

    std::cout << "Year Level: ";
    std::cin >> yearLevel;

    std::cout << "No. of units Enrolled: ";
    std::cin >> numberOfUnits;

    

    //Year name and rate per unit based on year level..

    switch (yearLevel)
    {
    case 1:
        yearName = "Freshman";
        ratePerUnit = 1500;
        break;

    case 2:
        yearName = "Sophomore";
        ratePerUnit = 1800;
        break;

    case 3:
        yearName = "Junior";
        ratePerUnit = 2000;
        break;
    case 4:
    case 5:
        yearName = "Senior";
        ratePerUnit = 2300;
        break;


    default:
        break;
    }



// calcuation of tuition fee


    tuitionFee = numberOfUnits * ratePerUnit;

    downPayment = 0.3 * tuitionFee;

    balance = tuitionFee - downPayment;


//display user info

std::cout << "\n\t\tENROLLMENT SLIP" << std::endl;

std::cout << "Student Name: " << studentName << std::endl;
std::cout << "Program Course: " << programCourse << std::endl;
std::cout << "Year name: " << yearName << std::endl;
std::cout << "No. of Units: " << numberOfUnits << std::endl;
std::cout << "Tuition Fee: " << tuitionFee << std::endl;
std::cout << "Down Payment: " << downPayment << std::endl;
std::cout << "Balance: " << balance << std::endl;


return 0;


}

