// BEE 208 - Control Statements in C++
// Question 6: Transformer Ratio Calculator Menu
// Required Control Statement: switch

#include<iostream>
using namespace std;

int main()
{
    //declaration
    int    choice;
    double primaryTurns, secondaryTurns;
    double primaryVoltage, secondaryVoltage;
    double turnsRatio;

    //input
    cout << "========================================" << endl;
    cout << "    TRANSFORMER RATIO CALCULATOR MENU   " << endl;
    cout << "========================================" << endl;
    cout << "  1. Calculate Turns Ratio"              << endl;
    cout << "  2. Calculate Secondary Voltage"        << endl;
    cout << "  3. Calculate Primary Voltage"          << endl;
    cout << "----------------------------------------" << endl;
    cout << "Enter your choice (1-3): ";
    cin  >> choice;

    //process and display
    cout << "----------------------------------------" << endl;
    switch (choice)
    {
        case 1:
            cout << "Enter Primary Turns (N1)  : ";
            cin  >> primaryTurns;
            cout << "Enter Secondary Turns (N2): ";
            cin  >> secondaryTurns;
            turnsRatio = primaryTurns / secondaryTurns;
            cout << "Turns Ratio (N1/N2) : " << turnsRatio << endl;
            break;
        case 2:
            cout << "Enter Primary Voltage (V1): ";
            cin  >> primaryVoltage;
            cout << "Enter Primary Turns (N1)  : ";
            cin  >> primaryTurns;
            cout << "Enter Secondary Turns (N2): ";
            cin  >> secondaryTurns;
            secondaryVoltage = primaryVoltage * secondaryTurns / primaryTurns;
            cout << "Secondary Voltage (V2) : " << secondaryVoltage << " V" << endl;
            break;
        case 3:
            cout << "Enter Secondary Voltage (V2): ";
            cin  >> secondaryVoltage;
            cout << "Enter Primary Turns (N1)    : ";
            cin  >> primaryTurns;
            cout << "Enter Secondary Turns (N2)  : ";
            cin  >> secondaryTurns;
            primaryVoltage = secondaryVoltage * primaryTurns / secondaryTurns;
            cout << "Primary Voltage (V1) : " << primaryVoltage << " V" << endl;
            break;
        default:
            cout << "Error: Invalid choice. Please select 1 to 3." << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
