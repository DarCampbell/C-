#include <iostream>

using namespace std; 

class Student
{
    public:
        string name;
        int roll_no;
};

int main()
{

Student Tutor;
Tutor.name = "John";
Tutor.roll_no = 2;

cout << Tutor.name << endl;
cout << Tutor.roll_no;



}