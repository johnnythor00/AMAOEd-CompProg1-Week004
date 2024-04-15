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
#include <limits>


using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
/////////



int main() {
    std::string customerName;
    int age;
    int numGuests;
    double numDays;

    // Get customer name
    std::cout << "Customer Name: ";
    std::getline(std::cin, customerName);


while (true)
{
    std::cout <<"Age: ";
    std::cin >> age;

    if (age>=18) 
    {
        break;

    }else
    {
        std::cout << "Error: Age should be 18 and above." << std::endl;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
}

while (true)
{
    std::cout << "Number of guests: ";
    std::cin >> numGuests;


    if (numGuests >= 1)
    {
        break;
    }else
        std::cout << "Error: Number of guests should 1 and above." << std::endl;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
     


while (true) {
        std::cout << "Number of days: ";
        std::cin >> numDays;

        if (numDays > 0) {
            break;
        } else {
            std::cout << "Error: Number of days should be greater than 0." << std::endl;
            // Clear input buffer
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
}


double ratePerDay;
if (numGuests == 1)
{
    ratePerDay = 1000;
} else if (numGuests == 2)
{
    ratePerDay = 1800;
} else if (numGuests == 3)
{
    ratePerDay = 2700;
} else if (numGuests == 4)
{
    ratePerDay = 3600;
} else {

    ratePerDay = 4500;
}


//compute

double totalPayment = ratePerDay * numDays;
double downPayment = 0.4 * totalPayment;
double balance = totalPayment - downPayment;




//display output

std::cout << "\n\t\tHotel Reservation Slip" << std::endl;
std::cout << "Customer Name\t: " << customerName << std::endl;
std::cout << "Age\t\t: " << age << std::endl;
std::cout << "Number of guest\t: " << numGuests << std::endl;
std:cout << "Number of days\t: " << numDays << std::endl;
std::cout << "Total Payment\t: " << totalPayment << std::endl;
std::cout << "Down Payment \t: " << downPayment << std::endl;
std::cout << "Balance\t\t: " << balance << std::endl;




    return 0;
}








