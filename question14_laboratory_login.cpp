// BEE 208 - Control Statements in C++
// Question 14: Laboratory Login Attempt
// Required Control Statement: while loop with a counter

#include<iostream>
#include<string>
using namespace std;

int main()
{
    //declaration
    string accessCode;
    int    attempts;
    bool   granted;

    //process and display
    cout << "========================================" << endl;
    cout << "       LABORATORY ACCESS SYSTEM         " << endl;
    cout << "========================================" << endl;

    attempts = 0;
    granted  = false;

    while (attempts < 3)
    {
        cout << "Enter Laboratory Access Code: ";
        cin  >> accessCode;
        attempts = attempts + 1;

        if (accessCode == "BEE208")
        {
            granted = true;
            break;
        }
        else
        {
            if (attempts < 3)
            {
                cout << "Incorrect code. " << (3 - attempts) << " attempt(s) remaining." << endl;
            }
        }
    }

    //display
    cout << "----------------------------------------" << endl;
    if (granted)
    {
        cout << "Status : Access granted." << endl;
    }
    else
    {
        cout << "Status : Access denied. Maximum attempts reached." << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
