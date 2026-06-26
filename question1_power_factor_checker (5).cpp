// BEE 208 - Control Statements in C++
// Question 1: Power Factor Status Checker
// Required Control Statement: if...else if...else

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double pf;

    //input
    cout << "========================================" << endl;
    cout << "       POWER FACTOR STATUS CHECKER      " << endl;
    cout << "========================================" << endl;
    cout << "Enter Power Factor (0 to 1): ";
    cin  >> pf;

    //process and display
    cout << "----------------------------------------" << endl;
    if (pf < 0 || pf > 1)
    {
        cout << "Status : Invalid power factor" << endl;
    }
    else if (pf >= 0.00 && pf <= 0.50)
    {
        cout << "Status : Poor power factor" << endl;
    }
    else if (pf >= 0.51 && pf <= 0.80)
    {
        cout << "Status : Fair power factor" << endl;
    }
    else if (pf >= 0.81 && pf <= 0.95)
    {
        cout << "Status : Good power factor" << endl;
    }
    else if (pf >= 0.96 && pf <= 1.00)
    {
        cout << "Status : Excellent power factor" << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
