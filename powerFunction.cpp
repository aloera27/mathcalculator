#include <iostream>
#include <cmath> 

using std::cin; 
using std::cout; 

using namespace std; 


double power(double base, int exp) {

	double result = 1;
	for (int i = 0; i < exp; i++)
	{
		result = result * base;
	}
	return result;

}

	void print_pow(double base, int exp) 
	{

		double myPower = power(base, exp);
		cout << base << " raised to the " << exp << " power is " << myPower << endl;
	}

	int main()

	{
		double base; 
		int exp; 
		cout << "what is the base?";
		cin >> base;
		cout << "what is exp";
		cin >> exp;
		print_pow(base, exp);
		print_pow(1, 2); 
		print_pow(10, 3); 


		return 0;
	}

	