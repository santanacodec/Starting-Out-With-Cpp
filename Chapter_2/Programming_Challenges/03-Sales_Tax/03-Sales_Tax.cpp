// 03-Sales_Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* Write a program that will compute the total sales tax on a $95 purchase. Assume the 
* state sales tax is 4 percent, and the county sales tax is 2 percent.
*/

#include <iostream>
using namespace std;

int main()
{
    double purchase = 95.00;
    const double STATE_SALES_TAX = .04;
    const double COUNTY_SALES_TAX = .02;

    double total = purchase * (STATE_SALES_TAX + COUNTY_SALES_TAX);

    cout << "The total sales tax for a $" << purchase << " is: $" << total << endl;
    return 0;
}
