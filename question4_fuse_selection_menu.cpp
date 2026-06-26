// BEE 208 - Control Statements in C++
// Question 4: Fuse Selection Menu
// Required Control Statement: switch

#include<iostream>
using namespace std;

int main()
{
    //declaration
    int choice;

    //input
    cout << "========================================" << endl;
    cout << "          FUSE SELECTION MENU           " << endl;
    cout << "========================================" << endl;
    cout << "  1. 5 A  Fuse" << endl;
    cout << "  2. 10 A Fuse" << endl;
    cout << "  3. 13 A Fuse" << endl;
    cout << "  4. 20 A Fuse" << endl;
    cout << "  5. 32 A Fuse" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Enter your choice (1-5): ";
    cin  >> choice;

    //process and display
    cout << "----------------------------------------" << endl;
    switch (choice)
    {
        case 1:
            cout << "Application: Suitable for low-power circuits," << endl;
            cout << "             lighting points and small appliances." << endl;
            break;
        case 2:
            cout << "Application: Suitable for general lighting circuits" << endl;
            cout << "             and small household appliances." << endl;
            break;
        case 3:
            cout << "Application: Suitable for standard 13 A plug sockets" << endl;
            cout << "             and medium-power appliances." << endl;
            break;
        case 4:
            cout << "Application: Suitable for immersion heaters," << endl;
            cout << "             storage heaters and larger appliances." << endl;
            break;
        case 5:
            cout << "Application: Suitable for cookers, electric showers" << endl;
            cout << "             and high-power ring main circuits." << endl;
            break;
        default:
            cout << "Error: Invalid choice. Please select 1 to 5." << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
