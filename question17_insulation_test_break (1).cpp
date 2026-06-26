// BEE 208 - Control Statements in C++
// Question 17: Stop Insulation Test Using Break
// Required Control Statement: for loop with break

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double resistance;
    int    i;

    //input
    cout << "========================================" << endl;
    cout << "          INSULATION RESISTANCE TEST    " << endl;
    cout << "========================================" << endl;
    cout << "Enter up to 10 insulation readings:"     << endl;
    cout << "----------------------------------------" << endl;

    //process and display
    for (i = 1; i <= 10; i++)
    {
        cout << "Reading " << i << " - Insulation Resistance (MOhm): ";
        cin  >> resistance;

        if (resistance < 1)
        {
            cout << "----------------------------------------" << endl;
            cout << "Alert  : Insulation failure detected. Test stopped." << endl;
            break;
        }
        else
        {
            cout << "Status : Insulation reading acceptable (" << resistance << " MOhm)" << endl;
        }
    }

    cout << "========================================" << endl;

    return 0;
}
