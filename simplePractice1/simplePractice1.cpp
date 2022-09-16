//calculator to solve an integral
// first we get user input for the function
// do the calculations
// return the antiderivative back to the user.
// first draft will only contain the power rule
//later using multiple files i can add a power rule derivative calculator.


#include <iostream> //used to include cin cout etc
#include <cmath>    //used to include higher level math

double coefficientCalc(double x, double y);		//foward delcaration of a function
double exponentCalc(double x);		//more foward delcaration
double getInputData();				//more foward to call for user input



int main() //declaring the main function, cpp needs it to function
 {
	
	std::cout << "Enter the coefficient: ";		//asking for user input for the coeffiecent
	double x1{getInputData()};						//using the function to gather the input
	std::cout << "Enter the exponent: ";		//same deal as coeffiecent but for exponent
	double x2{getInputData()};						//using the same function for input data

	std::cout << "The integral of your function is: "
		<< coefficientCalc(x1, x2) << "x^" << exponentCalc(x2);

 return 0;
	}

double getInputData()
{
	double x{};
	std::cin >> x;
	return x;
	}

double coefficientCalc(double x, double y)		//defining the function for the coefficient
 {
	return (x)/(y+1);
	}

double exponentCalc(double x)			//defining function for the exponent
 {
	return x + 1;
	}
