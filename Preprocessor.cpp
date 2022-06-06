/* Testing out how the preprossor directives are used and can help clarify the code
Create by: Darlisha Davis - Campbell 6/6/2022 */

#include <iostream>

#define CAPACITY 50
//Un comment this section to see how the debuf preprocessor will affect the outcome of the program
#define DEBUG

using namespace std; 

int main()
{
    int large = CAPACITY; 
    int small = 23; 
    int total;

#ifdef DEBUG
    cout << "[Adding the numbers together]" << endl;
#endif

    total += small;
    cout << "The total of the two numbers is: " << total << endl;
}