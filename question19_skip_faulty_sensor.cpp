// BEE 208 - Control Statements in C++
// Question 19: Skip Faulty Sensor Readings
// Required Control Statement: for loop with continue

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double reading, total;
    int    i, validCount;

    //input
    cout << "========================================" << endl;
    cout << "        SENSOR READING ANALYSER         " << endl;
    cout << "  (Enter 999 to flag a faulty reading)" << endl;
    cout << "========================================" << endl;

    //process
    total      = 0;
    validCount = 0;
    for (i = 1; i <= 12; i++)
    {
        cout << "Sensor Reading " << i << ": ";
        cin  >> reading;

        if (reading == 999)
        {
            cout << "Notice : Faulty sensor value detected. Reading skipped." << endl;
            continue;
        }

        total      = total + reading;
        validCount = validCount + 1;
    }

    //display
    cout << "----------------------------------------" << endl;
    cout << "Valid Readings Count : " << validCount    << endl;
    if (validCount > 0)
    {
        cout << "Average of Valid Readings : " << (total / validCount) << endl;
    }
    else
    {
        cout << "No valid readings to calculate average." << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
