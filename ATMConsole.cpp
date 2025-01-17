#include <iostream>
#include <string>

//This function creates a hard coded user and password and displays them to the screen
void userLogin()
{
	std::string username = "Stormie";
	int pin = 1234;
	

	std::cout << "What is your name?: \n" << username << std::endl;
	std::cout << "Welcome " << username << std::endl;
	std::cout << "What is your pin?\n" << pin << std::endl ;
	std::cout << "Thank you for your pin.\n";
	
};
//This function takes the current balance and subtracts the amount the user would like to withdraw from the bank account
int withdraw(int balance, int userAmount)
{
	int newBalance;
	// sets the new balance as the balance that is current in the bank account with the amount the user would like to subtract taken away
	newBalance = balance - userAmount;
	//updates balance
	balance = newBalance;

	return balance;
};
//This function takes the current balance and adds the amount the user would like to withdraw from the bank account
int deposit(int balance, int userAmount)
{
	int newBalance;
	//sets the variable new balance as the balance that is currently in the bank account with the amount the user would like to add 
	newBalance = balance + userAmount;
	//updates balance 
	balance = newBalance;

	return balance;
};
//This function creates a loop that takes what the user would like to do to the atm and calls the necessary function to do the action.
//The function will return the new balance or end the program 
int options(std::string userInput, int balance)
{

	int userAmount;

	//creates loop that does an action depending on the user input
	if (userInput == "Withdraw" || userInput == "withdraw")
	{

		std::cout << "You selected Withdraw!" << std::endl;
		std::cout << "Your current balance is: " << balance << std::endl;
		std::cout << "How much would you like to Withdraw?";
		std::cin >> userAmount;
		//updates balance to the result of the withdraw function
		balance = withdraw(balance, userAmount);
		std::cout << "Your new balance is: " << balance << std::endl;
		

	}
	else if (userInput == "Deposit" || userInput == "deposit")
	{

		std::cout << "You selected Deposit!" << std::endl;
		std::cout << "Your current balance is: " << balance << std::endl;
		std::cout << "How much would you like to Deposit?";
		std::cin >> userAmount;
		//update balance to the result of the depoist function
		balance = deposit(balance, userAmount);
		std::cout << "Your new balance is: " << balance << std::endl;

	}

	else if (userInput == "End" || userInput == "end")
	{
		std::cout << "Thank you for using the ATM";
	}

	else
		std::cout << "Please select option Withdraw,Deposit,End";
	return balance;
	
};

int main()
{
	//creates a string for the user input
	std::string userInput;
	//creates a balance variable and sets it at 100
	int balance = 100;
	//calls the user login function to get the username and password information and display it to the screen
	userLogin();
	//This loop will ask the user what they would like to do at the atm until they select end
	do
	{
		std::cout << "What would you like to do?\nYour options are Withdraw,Deposit,or End ";
		std::cin >> userInput;
		//updates the balance variable with the return of the options function
		balance = options(userInput,balance);
	} 
	//continues the loop until the user inputs either end or End
	while (userInput != "End" && userInput != "end");
	

	return 0;


}