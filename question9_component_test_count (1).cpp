// BEE 208 - Control Statements in C++
// Question 9: Count Passed Component Tests
// Required Control Statement: for loop with if...else

#include<iostream>
using namespace std;

int main()
{
    //declaration
    int result, passCount, failCount, i;

    //input
    cout << "========================================" << endl;
    cout << "       COMPONENT TEST PASS/FAIL COUNT   " << endl;
    cout << "========================================" << endl;
    cout << "Enter 1 for PASS or 0 for FAIL"          << endl;
    cout << "for each of the 15 components:"          << endl;
    cout << "----------------------------------------" << endl;

    //process
    passCount = 0;
    failCount = 0;
    for (i = 1; i <= 15; i++)
    {
        cout << "Component " << i << " Result (1=Pass, 0=Fail): ";
        cin  >> result;

        if (result == 1)
        {
            passCount = passCount + 1;
        }
        else
        {
            failCount = failCount + 1;
        }
    }

    //display
    cout << "----------------------------------------" << endl;
    cout << "Components Passed : " << passCount << endl;
    cout << "Components Failed : " << failCount << endl;
    cout << "========================================" << endl;

    return 0;
}
