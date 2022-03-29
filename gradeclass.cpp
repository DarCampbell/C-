/* 
Write a program that inputs two grades separated by a space.  

If both grades are below a score of sixty then the program should output the message:

Student Failed:(

If both grades are greater than or equal to ninety five then the program should output the message:

Student Graduated with Honors:)

Otherwise the program should output the message:

Student Graduated!

*/

#include <iostream>

using namespace std; 

int main()
{
    int grade1, grade2, i;

    cout << "Please enter two grades seperated by a space! ";
    cin>>grade1>>grade2;

    if (grade1 < 60 && grade2 < 60)
    {
        cout <<"Student failed :(";
    }
    else if (grade1 >= 95 && grade2 >= 95)
    {
        cout << "Student Graduated with Honors :)";
    }
    else 
        cout << "Student Graduated!";


    return 0;
    

}