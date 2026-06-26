// BEE 208 - Control Statements in C++
// Question 7: Total Power of Lighting Points
// Required Control Statement: for loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double wattage, totalPower;
    int    i;

    //input
    cout << "========================================" << endl;
    cout << "     TOTAL POWER OF LIGHTING POINTS     " << endl;
    cout << "========================================" << endl;
    cout << "Enter wattage for 12 lighting points:"   << endl;
    cout << "----------------------------------------" << endl;

    //process
    totalPower = 0;
    for (i = 1; i <= 12; i++)
    {
        cout << "Lighting Point " << i << " Wattage (W): ";
        cin  >> wattage;
        totalPower = totalPower + wattage;
    }

    //display
    cout << "----------------------------------------" << endl;
    cout << "Total Lighting Load : " << totalPower << " W" << endl;
    cout << "========================================" << endl;

    return 0;
}
