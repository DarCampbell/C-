/* 
Write a function for determining if a year is a leap year in the Gregorian calendar.
The system is to check if it is divisible by 4 but not by 100 unless it is also divisible
by 400.
*/

#include <iostream> 

using namespace std; 

int myleapyear(int userYear);

int main()
{
    int year; 

    cout << "Please enter a year! ";
    cin >> year;

    myleapyear(year);

    return 0;

}

myleapyear(int UserYear)
{
    int yearResult4, yearResult100;
    yearResult4 = UserYear % 4;
    yearResult100 - UserYear % 100; 

    if(yearResult4 == 0 && yearResult100 != 0  )
    {
        cout << UserYear << " Is a leap year";
    }
    else 
        cout << UserYear << " Is NOT a leap year";

    return 0;

    
}