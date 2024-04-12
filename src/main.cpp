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
/////////

//7 columns 5 rows


const int ROWS= 5;
const int COLUMNS= 7;



//functions

void displaySeats(int seats[][COLUMNS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            cout << seats[i][j] << "\t";
        }
        cout << endl;
    }
}


bool isValidSeat(int seatNum) {

    return seatNum >= 1 && seatNum <= ROWS * COLUMNS;
}

void reserveSeat(int seats[][COLUMNS], int seatNum) {

    int row = (seatNum - 1) / COLUMNS;
    int col = (seatNum - 1) % COLUMNS;



    if (seats[row][col] == 0)
    {
        cout << "Seat is already taken" << endl;

    } else {
        seats[row][col] = 0;
        cout << "Seat succesfully reserved." << endl;

    }

}


int main() {

int seats[ROWS][COLUMNS];
int seatNum;

int count = 1;

for (int i = 0; i < ROWS; i++)
{
    for (int j = 0; j < COLUMNS; j++)
    {
        seats[i][j] = count++;
    }
}

displaySeats(seats);



//reserve


while (true)
{
    cout << "Enter seat number to reserve:"; 
    cin >> seatNum;


if (!isValidSeat(seatNum))
{
    cout << "Invalid seat number. Please enter a valid seat number." << endl;
    continue;
}


reserveSeat(seats, seatNum);
displaySeats(seats);

    }

return 0;


}



















