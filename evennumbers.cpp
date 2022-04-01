/* Write a program that reads a positive integer n, and prints the first
n even numbers. */

#include <iostream>

using namespace std;

int main()
{
    int userNum, i=2, j=1; 

    cout << " Please enter a positive number ";
    cin >> userNum;

    while (j <= userNum)
    {
        cout << i << endl;
        i+=2;
        j++;
    }
        
}