// BEE 208 - Control Statements in C++
// Question 5: Measurement Unit Conversion Menu
// Required Control Statement: switch

#include<iostream>
using namespace std;

int main()
{
    //declaration
    int    choice;
    double inputValue, result;

    //input
    cout << "========================================" << endl;
    cout << "     MEASUREMENT UNIT CONVERSION MENU   " << endl;
    cout << "========================================" << endl;
    cout << "  1. Convert Volts to Millivolts"        << endl;
    cout << "  2. Convert Amperes to Milliamperes"    << endl;
    cout << "  3. Convert Kilowatts to Watts"         << endl;
    cout << "  4. Convert Ohms to Kilo-Ohms"          << endl;
    cout << "----------------------------------------" << endl;
    cout << "Enter your choice (1-4): ";
    cin  >> choice;

    //process and display
    cout << "----------------------------------------" << endl;
    switch (choice)
    {
        case 1:
            cout << "Enter value in Volts (V)     : ";
            cin  >> inputValue;
            result = inputValue * 1000;
            cout << "Result : " << result << " mV" << endl;
            break;
        case 2:
            cout << "Enter value in Amperes (A)   : ";
            cin  >> inputValue;
            result = inputValue * 1000;
            cout << "Result : " << result << " mA" << endl;
            break;
        case 3:
            cout << "Enter value in Kilowatts (kW): ";
            cin  >> inputValue;
            result = inputValue * 1000;
            cout << "Result : " << result << " W" << endl;
            break;
        case 4:
            cout << "Enter value in Ohms (Ohm)    : ";
            cin  >> inputValue;
            result = inputValue / 1000;
            cout << "Result : " << result << " kOhm" << endl;
            break;
        default:
            cout << "Error: Invalid choice. Please select 1 to 4." << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
