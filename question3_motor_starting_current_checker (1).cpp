// BEE 208 - Control Statements in C++
// Question 3: Motor Starting Current Checker
// Required Control Statement: if...else

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double ratedCurrent, startingCurrent;

    //input
    cout << "========================================" << endl;
    cout << "      MOTOR STARTING CURRENT CHECKER    " << endl;
    cout << "========================================" << endl;
    cout << "Enter Rated Current (A)   : ";
    cin  >> ratedCurrent;
    cout << "Enter Starting Current (A): ";
    cin  >> startingCurrent;

    //process and display
    cout << "----------------------------------------" << endl;
    if (startingCurrent > 3 * ratedCurrent)
    {
        cout << "Warning : High starting current. Use proper motor starter." << endl;
    }
    else
    {
        cout << "Status  : Starting current is acceptable." << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
