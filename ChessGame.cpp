//Create a chess game where the user inputs where the peice will move on the board
// Created by Darlisha Davis-Campbell
#include <iostream> 
#include <string>

using namespace std;
//nt move;
//function that takes the user input as a parameter
//pointer of the peice will move the pointer to the new address and input the char of the peice into that address


//function to show where the peice is on the board
void board(int move)
{
    int newMove,x;
    double chessboard[8][8] = {
    { 0,0 }, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}};

    double* ptr = &chessboard[0][0];
    double peice = *ptr; 

    cout << "The peice is at location: " << peice << endl;
    newMove = *ptr + move;
    peice = newMove;
    x = peice;
    chessboard[x][0] = peice;
    
    cout << "The peice is now at location: " << peice << endl;

  //for testing only
     for (int i=0; i<8; i++)
    {
        for (int j=0; j < 8; j++)
        {
            cout << chessboard[i][j] << endl;
            j++;
        }
        i++;
    }
}

int main()
{
    int newMove;
    cout << "Welcome to the Game! Please input a number 1 - 8 to move the chess peice to that spot on the board ";
    cin >> newMove;

    board(newMove);

    cout << "Thank you! Please input a new number 1-8 to move the chess peice or press enter to quit";
    cin >>newMove;

    board(newMove);

}
