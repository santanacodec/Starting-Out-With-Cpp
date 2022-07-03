// 02-Sales_Prediction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* The East Coast sales division of a company generates 58 percent of total sales.
* Based on that percentage, write a program that will predict how much the East Coast division will generate
* if the company has $8.6 million in sales this year.
*/

#include <iostream>
using namespace std;

int main()
{
    const double PERCENT_OF_TOTAL_SALES = 0.58;
    const double SALES = 8600000;

    double prediction = SALES * PERCENT_OF_TOTAL_SALES;

    cout << "The sales prediciton for the Eas Coast division is: " << prediction << endl;
    return 0;
}

