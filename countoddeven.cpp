/*
Write a program that inputs four numbers separated by spaces.  
The program should count how many odd and even numbers there are. */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4,i; 
    int numArray[4];
    int totalOdd =0, totalEven=0, result =0;
    cout << "Please enter 4 numbers with a space inbetween each";
  
    for(i=0; i<4; i++)
    {
        cin>> numArray[i];

        if (numArray[i] % 2 == result)
        {
        totalEven++;
         }
        else 
        totalOdd++;
    
    }
    if (totalEven == totalOdd)
    {
        cout << "Even number of even and Odd";
    }
    else if (totalEven > totalOdd)
    {
        cout << "More Even";
    }
    else 
        cout <<"More Odd";
   
    
    
}
