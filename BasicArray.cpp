//Create a const array. Allow user to input the value of the array that they want. Display that value

#include <iostream>

using namespace std;

void whatIs(const *r, int value)
{
    r = &r[value]; //set the pointer at the address of the value the user is interested in
    cout << "That value in this array is: " << *r; //print to screen
}

int main()
{
    int p[10]; //create an array of 10 
    int location;

    for(int i =0; i<10; i++) //initialize the array 
    {
        p[i] = i +1;
        cout << p[i]<< endl;
        
    }
    
    //ask for user input
    cout << "What location of the array would you like to know?"; 
    cin >> location;

    //pass information into the what is function
    whatIs(p, location);




}