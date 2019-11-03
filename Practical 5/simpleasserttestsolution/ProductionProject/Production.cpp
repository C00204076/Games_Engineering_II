#include "Production.h"


int Production::someMethod(int a)
{
	return a - a;
}

//
bool Production::lessOrGreaterThan(std::vector<int> list, int min, int max)
{
	// inRange starts true
	bool inRange = true;

	// If list is empty...
	if (list.size() == 0)
	{
		// ...inRange is set to false
		inRange = false;
	}

	// For loop to check all elements in list using auto...
	for (auto number : list)
	{
		// ...if number is less then min or greater then max...
		if (number < min || number > max)
		{
			// ...inRange is set to false
			inRange = false;
		}
	}

	return inRange;
}


//
bool Production::maxNumbers(std::vector<int> list, int number)
{
	bool size = true;

	// If list size is not equal to number...
	if (list.size() != number)
	{
		// ...then size is set to false
		size = false;
	}

	return size;
}

//
bool Production::repeatedNumbers(std::vector<int> list)
{
	bool repeated;

	std::sort(list.begin(), list.end());

	auto last = std::unique(list.begin(), list.end());

	// Checks if last is equal last element in list to see if any numbers are repeated
	repeated = (last == list.end());

	return repeated;
}