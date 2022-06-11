// Program_2-22.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program calculates the amount of pay that
// will be contributed to a retirement plan if 5%,
// 7%, or 10% of monthly pay is withheld.

#include <iostream>
using namespace std;

int main()
{
    // Variables to hold the monthly pay and the 
    // amount of contribution.
    double monthlyPay = 6000.0, contribution;

    // Calculate and display a 5% contribution.
    contribution = monthlyPay * 0.05;
    cout << "5 percent is $" << contribution
        << " per month.\n";

    // Calculate and display a 7% contribution.
    contribution = monthlyPay * 0.07;
    cout << "7 percent is $" << contribution
        << " per month.\n";

    // Calculate and display a 10% contribution.
    contribution = monthlyPay * 0.1;
    cout << "10 percent is $" << contribution
        << " per month.\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
