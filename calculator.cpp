#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
	return a * b + 0.5;
}

int Calculator::Div (double a, double b)
{
	return a / b;
}

int Calculator::Pow (double a, double b)
{
	int res = 1;
	while(b > 0){
		res *= a;
		b--;
	}

	return res;
}
