// Pattern Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int plus;
    int  rows;

    cout << left << setw(11) << "Pattern A" << left << setw(11) << "Pattern B" << endl;

    for (rows = 0; rows < 10; rows++)
    {

        for (plus = 0; plus < rows; plus++) // Pattern 1
        {
            cout << left << "+";
        }

        cout << setw(11);

        for (plus = 11; plus > rows; plus--) // Pattern 2
        {
            cout << left << "+";
        }

        
        cout << endl;
        
    }
}


