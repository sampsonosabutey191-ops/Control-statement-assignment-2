// BEE 208 - Control Statements in C++
// Question 8: Average Current of Three-Phase Readings
// Required Control Statement: for loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double line1, line2, line3, averageCurrent;
    int    i;

    //input and process
    cout << "========================================" << endl;
    cout << "  AVERAGE CURRENT OF THREE-PHASE SYSTEM " << endl;
    cout << "========================================" << endl;

    for (i = 1; i <= 6; i++)
    {
        cout << "--- Set " << i << " ---" << endl;
        cout << "Enter Line 1 Current (A): ";
        cin  >> line1;
        cout << "Enter Line 2 Current (A): ";
        cin  >> line2;
        cout << "Enter Line 3 Current (A): ";
        cin  >> line3;

        //process
        averageCurrent = (line1 + line2 + line3) / 3;

        //display
        cout << "Average Current for Set " << i << " : " << averageCurrent << " A" << endl;
        cout << "----------------------------------------" << endl;
    }

    cout << "========================================" << endl;

    return 0;
}
