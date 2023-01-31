/*
// Josh Khalil
// CS 2400
// Wage calculator
// September 24, 2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//declare variables
    double rate = 5.5;

    const double commission1 = 0.10;
    const double commission2 = 0.15;

    float total;

//I/O
std::cout << "Enter the weekly sales amount: \n";

std::cin >> total;

//declare variables for secondary functions

    double plan1 = (total *commission1) + (rate * 40);
    double plan2 = ((total * commission2));

std::cout << "Amount of Sales:  " << total << endl;

std::cout << "Plan 1 pays: " << plan1 << endl;

std::cout << "Plan 2 pays: " << plan2 << endl;

//if-else statement

if (plan1 > plan2)
{
    std::cout << "Plan 1 is better";
}
else
{
    std::cout << "Plan 2 is better";
}

return (EXIT_SUCCESS);
}
