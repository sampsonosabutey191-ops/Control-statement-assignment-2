// BEE 208 - Control Statements in C++
// Question 16: Repeated DC Power Calculator
// Required Control Statement: do...while loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double voltage, current, power;
    char   continueChoice;

    //input, process and display
    cout << "========================================" << endl;
    cout << "         DC POWER CALCULATOR            " << endl;
    cout << "  Formula: Power = Voltage x Current"    << endl;
    cout << "========================================" << endl;

    do
    {
        cout << "Enter Voltage (V)  : ";
        cin  >> voltage;
        cout << "Enter Current (A)  : ";
        cin  >> current;

        //process
        power = voltage * current;

        //display
        cout << "DC Power           : " << power << " W" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Perform another calculation? (Y/N): ";
        cin  >> continueChoice;
        cout << "----------------------------------------" << endl;
    }
    while (continueChoice == 'Y' || continueChoice == 'y');

    cout << "Programme ended." << endl;
    cout << "========================================" << endl;

    return 0;
}
