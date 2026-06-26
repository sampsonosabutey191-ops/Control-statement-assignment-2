// BEE 208 - Control Statements in C++
// Question 2: Cable Temperature Warning System
// Required Control Statement: if...else

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double temp;

    //input
    cout << "========================================" << endl;
    cout << "    CABLE TEMPERATURE WARNING SYSTEM    " << endl;
    cout << "========================================" << endl;
    cout << "Enter Cable Temperature (deg C): ";
    cin  >> temp;

    //process and display
    cout << "----------------------------------------" << endl;
    if (temp > 70)
    {
        cout << "Warning : Cable overheating detected." << endl;
    }
    else
    {
        cout << "Status  : Cable temperature is within safe range." << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
