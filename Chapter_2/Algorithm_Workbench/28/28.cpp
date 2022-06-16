// 28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
    Convert the following pseudocode to C++ code. Be sure to define the appropriate variables.
        
        Store 172.5 in the force variable.
        Store 27.5 in the area variable.
        Divide the area by force and store the result in the pressure variable.
        display the contents of the pressure.
*/

#include <iostream>
using namespace std;

int main()
{
    double force = 172.5;
    double area = 27.5;
    double pressure = area / force;

    cout << "The area of " << area << " divided by the force of " << force << " is equal to the pressure of " << pressure << endl;

    return 0;
}