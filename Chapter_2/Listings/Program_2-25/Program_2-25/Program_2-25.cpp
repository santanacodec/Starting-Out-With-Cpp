// Program_2-25.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program converts seconds to minutes and seconds.

#include <iostream>
using namespace std;

int main()
{
    // The total seconds is 125.
    int totalSeconds = 125;

    // Variables for the minutes and seconds.
    int minutes, seconds;

    // Get the number of minutes.
    minutes = totalSeconds / 60;

    // Get the remaining seconds.
    seconds = totalSeconds % 60;

    // Display the results.
    cout << totalSeconds << " seconds is equivalent to:\n";
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

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
