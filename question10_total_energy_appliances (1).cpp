// BEE 208 - Control Statements in C++
// Question 10: Calculate Total Energy for Appliances
// Required Control Statement: for loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double power, time, energy, totalEnergy;
    int    i;

    //input
    cout << "========================================" << endl;
    cout << "    TOTAL ENERGY CONSUMPTION CALCULATOR " << endl;
    cout << "========================================" << endl;
    cout << "Enter Power (W) and Time (h) for"        << endl;
    cout << "each of the 8 appliances:"               << endl;
    cout << "----------------------------------------" << endl;

    //process
    totalEnergy = 0;
    for (i = 1; i <= 8; i++)
    {
        cout << "Appliance " << i << ":" << endl;
        cout << "  Power Rating (W) : ";
        cin  >> power;
        cout << "  Usage Time   (h) : ";
        cin  >> time;
        energy      = power * time;
        totalEnergy = totalEnergy + energy;
        cout << "  Energy          : " << energy << " Wh" << endl;
        cout << "----------------------------------------" << endl;
    }

    //display
    cout << "Total Energy Consumed : " << totalEnergy << " Wh" << endl;
    cout << "========================================" << endl;

    return 0;
}
