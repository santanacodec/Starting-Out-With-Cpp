// Program_2-23.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program calculates the sale price of an item
// that is regularly priced at $59.95, with a 20 percent
// discount subtracted

#include <iostream>
using namespace std;

int main()
{
    // Variables to hold the regular price, the
    // amount of a discount, and the sale price.
    double regularPrice = 59.95, discount, salePrice;

    // Calculate the amount of a 20% discount.
    discount = regularPrice * 0.2;

    // Calculate the sale price by subtracting the 
    // discount from the regular price.
    salePrice = regularPrice - discount;

    // Display the results.
    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << salePrice << endl;
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
