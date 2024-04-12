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
    // Define an array to store the integers
    int integers[6];

    // Prompt the user to enter six integers
    cout << "Enter six integers, separated by spaces: ";

    // Read the integers into the array
    for (int i = 0; i < 6; i++) {
        cin >> integers[i];
    }

    // Bubble sort algorithm to sort the integers in ascending order
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            if (integers[j] > integers[j + 1]) {
                // Swap the integers if they are out of order
                int temp = integers[j];
                integers[j] = integers[j + 1];
                integers[j + 1] = temp;
            }
        }
    }

    // Display the sorted integers
    cout << "The sorted integers are: ";
    for (int i = 0; i < 6; i++) {
        cout << integers[i] << " ";
    }
    cout << endl;

    return 0;
}


