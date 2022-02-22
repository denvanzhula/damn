#include <iostream>
#include <string>
#include <iomanip>
#include "SimpleCalculator.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Add loop for range [x1, x2] with step (x2-x1)/10
	calculator::SimpleCalculator calc(-11.2, -12.93);
	cout << "RESULT: " << calc.compute(2.29) << endl;

}