// BEE 208 - Control Statements in C++
// Question 13: Earth Resistance Test
// Required Control Statement: while loop

#include<iostream>
using namespace std;

int main()
{
    //declaration
    double resistance;

    //input
    cout << "========================================" << endl;
    cout << "          EARTH RESISTANCE TEST         " << endl;
    cout << "========================================" << endl;
    cout << "Enter first resistance reading (Ohm): ";
    cin  >> resistance;

    //process and display
    while (resistance <= 5)
    {
        cout << "Status : Earth resistance is acceptable (" << resistance << " Ohm)" << endl;
        cout << "Enter next resistance reading (Ohm): ";
        cin  >> resistance;
    }

    cout << "----------------------------------------" << endl;
    cout << "Warning: Earth resistance too high. Improve earthing system." << endl;
    cout << "========================================" << endl;

    return 0;
}
