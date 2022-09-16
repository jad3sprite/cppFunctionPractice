// simple addition and multiplication calculator
// modular so it can be expanded for multiple different kinds of math!
// using if statements to give an options menu :)


#include <iostream> // for cin and cout
#include <cmath> // for higher level math functions

int userData() // function to get user inputs
{
	int userInteger{  };//variable to store integers
	std::cout << "Enter an integer:\n ";//gathering user provided integers
	std::cin >> userInteger;

	return userInteger;
}

// function for multiplication
int multiply(int x, int y)
{
	return x * y; //returning my multiplication!
}

int add(int x, int y)
{
	return x + y; // returning my addition
}

int main()
{
	int integer1{ userData() };// calling on the user data function to get our integers
	int integer2{ userData() };// this makes code easier to read and simplier

	int x{}; // option for what the user would like to do
	// simple input for determine what the user wants
	std::cout << "1. Multiply \n2. Addition";
	std::cin >> x;

	if (x == 1)
	{
		//using the multiply function
		std::cout << '\n' << //bumpin a new line in front
			multiply(integer1, integer2);//calling the multiply function with data
	}
	else if (x == 2)
	{
		//calling the add function
		std::cout << '\n' <<
			add(integer1, integer2);
	}
	else
	{
		std::cout << "that is not an option.";
	}


	return 0;

}