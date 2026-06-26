// BEE 208 - Control Statements in C++
// Question 15: Repeated Ohm's Law Calculator
// Required Control Statement: do...while loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double voltage, current, resistance;
    char   continueChoice;

    //input, process and display
    cout << "========================================" << endl;
    cout << "       OHM'S LAW RESISTANCE CALCULATOR  " << endl;
    cout << "  Formula: Resistance = Voltage / Current" << endl;
    cout << "========================================" << endl;

    do
    {
        cout << "Enter Voltage (V)  : ";
        cin  >> voltage;
        cout << "Enter Current (A)  : ";
        cin  >> current;

        //process
        resistance = voltage / current;

        //display
        cout << "Resistance         : " << resistance << " Ohm" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Do you want to continue? (Y/N): ";
        cin  >> continueChoice;
        cout << "----------------------------------------" << endl;
    }
    while (continueChoice == 'Y' || continueChoice == 'y');

    cout << "Programme ended." << endl;
    cout << "========================================" << endl;

    return 0;
}
