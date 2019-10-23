#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

//
int greaterThan(int a, int number)
{
	assert(a > number);

	return a;
}

//
int lessThan(int a, int number)
{
	assert(a < number);

	return a;
}

//
void maxNumbers(int list, int number)
{
	assert(list > number);
}

//
int repeatedNumbers(int a, int number)
{
	assert(a == number);

	return a;
}