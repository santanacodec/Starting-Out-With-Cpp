// Program_2-21.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program calculates hourly wages, uncluding overtime.

#include <iostream>
using namespace std;

int main()
{
    double regularWages,            // To hold regular wages
        basePayRate = 18.25,        // Base pay rate
        regularHours = 40.0,        // Hours worked less overtime
        overtimeWages,              // To hold overtime wages
        overtimePayRate = 27.78,    // Overtime pay rate
        overtimeHours = 10,         // Overtime hours worked
        totalWages;                 // To hold total wages

    // Calculate the regular wages.
    regularWages = basePayRate * regularHours;

    // Calculate the overtime wages.
    overtimeWages = overtimePayRate * overtimeHours;

    // Calculate the total wages.
    totalWages = regularWages + overtimeWages;

    // Display the total wages.
    cout << "Wages for this week are $" << totalWages << endl;
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
