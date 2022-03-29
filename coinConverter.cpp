/* Write a program that asks the user to enter an amount of 
money in the format of dollars and remaining cents. The program should calculate 
and print the minimum number of coins (quarters, dimes, nickels and pennies) that   
are equivalent to the given amount. */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double num, quarters = 0, dimes = 0, nickels = 0, pennies = 0, extraCoin;

    cout << "Please enter an amount of money in the format dollars and cents ";
    cin >> num; 

    quarters = num / .25;
    extraCoin = fmod(num,.25);
    dimes = extraCoin/ .10;
    extraCoin = fmod(dimes,.10);
    nickels = extraCoin/ 0.5;
    extraCoin = fmod(nickels,.05);
    pennies = extraCoin / .01;
    

    cout << "The coins are "  << trunc(quarters) << " quarter, " << trunc(dimes) << " dimes, " << trunc(nickels) <<" nickels, " << trunc(pennies) << " pennies.";

    return 0;

}
