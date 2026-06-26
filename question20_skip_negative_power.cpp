// BEE 208 - Control Statements in C++
// Question 20: Skip Negative Power Readings
// Required Control Statement: for loop with continue

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double reading, totalPower;
    int    i;

    //input
    cout << "========================================" << endl;
    cout << "       POWER MONITORING SYSTEM          " << endl;
    cout << "========================================" << endl;
    cout << "Enter 10 power readings from the system:" << endl;
    cout << "----------------------------------------" << endl;

    //process
    totalPower = 0;
    for (i = 1; i <= 10; i++)
    {
        cout << "Power Reading " << i << " (W): ";
        cin  >> reading;

        if (reading < 0)
        {
            cout << "Notice : Invalid reading skipped." << endl;
            continue;
        }

        totalPower = totalPower + reading;
    }

    //display
    cout << "----------------------------------------" << endl;
    cout << "Total Valid Power : " << totalPower << " W" << endl;
    cout << "========================================" << endl;

    return 0;
}
