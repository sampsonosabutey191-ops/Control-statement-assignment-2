// BEE 208 - Control Statements in C++
// Question 12: Solar Panel Voltage Tracker
// Required Control Statement: while loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double voltage;

    //input
    cout << "========================================" << endl;
    cout << "       SOLAR PANEL VOLTAGE TRACKER      " << endl;
    cout << "========================================" << endl;
    cout << "Enter first voltage reading (V): ";
    cin  >> voltage;

    //process and display
    while (voltage >= 18)
    {
        cout << "Status : Voltage is within operating level (" << voltage << " V)" << endl;
        cout << "Enter next voltage reading (V): ";
        cin  >> voltage;
    }

    cout << "----------------------------------------" << endl;
    cout << "Warning: Solar panel voltage below operating level." << endl;
    cout << "========================================" << endl;

    return 0;
}
