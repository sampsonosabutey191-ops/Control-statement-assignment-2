// BEE 208 - Control Statements in C++
// Question 11: Stop Motor Test When Temperature Is Unsafe
// Required Control Statement: while loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double temperature;

    //input
    cout << "========================================" << endl;
    cout << "         MOTOR TEMPERATURE MONITOR      " << endl;
    cout << "========================================" << endl;
    cout << "Enter first temperature reading (deg C): ";
    cin  >> temperature;

    //process and display
    while (temperature <= 90)
    {
        cout << "Status : Motor temperature is safe (" << temperature << " deg C)" << endl;
        cout << "Enter next temperature reading (deg C): ";
        cin  >> temperature;
    }

    cout << "----------------------------------------" << endl;
    cout << "Warning: Motor temperature unsafe. Stop motor test." << endl;
    cout << "========================================" << endl;

    return 0;
}
