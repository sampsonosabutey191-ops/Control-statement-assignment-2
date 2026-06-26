// BEE 208 - Control Statements in C++
// Question 18: Stop Load Test When Limit Is Reached
// Required Control Statement: for loop with break

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double powerRating, totalLoad;
    int    i;

    //input
    cout << "========================================" << endl;
    cout << "           LOAD TEST CALCULATOR         " << endl;
    cout << "========================================" << endl;
    cout << "Enter up to 20 appliance power ratings:" << endl;
    cout << "----------------------------------------" << endl;

    //process
    totalLoad = 0;
    for (i = 1; i <= 20; i++)
    {
        cout << "Appliance " << i << " Power Rating (W): ";
        cin  >> powerRating;
        totalLoad = totalLoad + powerRating;

        if (totalLoad > 5000)
        {
            cout << "----------------------------------------" << endl;
            cout << "Warning: Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
        else
        {
            cout << "Running Total Load : " << totalLoad << " W" << endl;
        }
    }

    //display
    cout << "----------------------------------------" << endl;
    cout << "Final Total Load   : " << totalLoad << " W" << endl;
    cout << "========================================" << endl;

    return 0;
}
