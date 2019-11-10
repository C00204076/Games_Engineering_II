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


//Control Flow
//
bool Production::controlLessOrGreater(std::vector<int> list, int min, int max)
{
	if (list.size() > 0){ // 1
		
		for (auto number : list) { // 2
			
			if (number < min || number > max) {//3
				
				return false;} // 4

			else { return true; // 5
			
			} // 6
		
		} // 7
	
	} // 8

} // 9

//
bool Production::controlMax(std::vector<int> list, int number)
{
	if (list.size() != number) { // 1
		return false;} // 2

	else { return true; // 3
	} // 4

} // 5

//
bool Production::controlRepeated(std::vector<int> list)
{
	if (list.size() > 2) { // 1
		for (int i = 0; i < list.size(); i++) { // 2

			for (int j = i + 1; j < list.size(); j++) 
			{ // 3

				if (list[i] == list[j]) { // 4

					return false;} // 5

				else {return true; // 6

				} // 7

			} // 8

		} // 9
	
	} // 10

	else {return true;// 11

	} // 12

} // 13