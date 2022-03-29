/*
Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the monetary 
value of the coins in the format of dollars and remaining cents.


Your program should interact with the user exactly as it shows in the following example:


Please enter the number of coins:
# of quarters: 20
# of dimes: 4
# of nickels: 13
# of pennies: 17
The total is 6 dollars and 22 cents */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double quarter, dimes, nickels, pennies, sum, dollar, cent;

    cout << " Please enter the number of coins:" << endl;

    cout << "# of quarter: ";
    cin >> quarter;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: "; 
    cin >> nickels; 
    cout << "# of pennies: "; 
    cin >> pennies;

    sum = quarter + dimes + nickels + pennies; 
    cent = modf(sum, &dollar);

    cout << "The total is " << dollar << " dollars and " << cent << " cents."; 

    
    
   return 0;
}
}
