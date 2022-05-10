//Given a list of numbers in an array find the biggest number and display it
//Darlisha Davis-Campbell

#include <iostream>

using namespace std; 



int main()
{
    int grades[9] = {12,45,64,2,7,34,53,23};
    int *p, *b;
    int temp,j;

    p = &grades[j];
    b = &grades[j+1];

    cout << "Let's find the biggest number in the array" << endl;

    for(int i=0; i<grades[i]; i++)
    {
        
        if(*p < *b)
        {
            temp = *b;
            *b++;
            
        }
        else
            temp = *p;
            *p++;
            
    }

        cout << "The greatest number in the array is: " << temp; 
}