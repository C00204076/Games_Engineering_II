#include <iostream>
#include <vector>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

/*int main()
{
	Production p;


	const int m_min = 1;
	const int m_max = 46;
	const int m_maxSize = 6;

	std::vector<int> m_list = { 1, 2, 3, 4, 5, 6 };
	std::vector<int> m_invalid = { 'a', 2, 'c', 3, 'e' };
	std::vector<int> m_empty = {};
	std::vector<int> m_smallRange = { 1 };
	std::vector<int> m_largeRange = { 1, 2, 3, 4, 5, 6, 7 };

	// List size test
	assert( (p.maxNumbers(m_list, m_maxSize)) );
	assert( (!p.maxNumbers(m_invalid, m_maxSize)) );
	assert( (!p.maxNumbers(m_empty, m_maxSize)) );
	assert( (!p.maxNumbers(m_smallRange, m_maxSize)) );
	assert( (!p.maxNumbers(m_largeRange, m_maxSize)) );

	// Repeated numbers test
	assert( (p.repeatedNumbers(m_list)) );
	assert( (!p.repeatedNumbers(m_invalid)) );
	assert( (!p.repeatedNumbers(m_empty)) );
	assert( (!p.repeatedNumbers(m_smallRange)) );
	assert( (!p.repeatedNumbers(m_largeRange)) );

	// Number range test
	assert( (p.lessOrGreaterThan(m_list, m_min, m_max)) );
	assert( (!p.lessOrGreaterThan(m_invalid, m_min, m_max)) );
	assert( (!p.lessOrGreaterThan(m_empty, m_min, m_max)) );
	assert( (!p.lessOrGreaterThan(m_smallRange, m_min, m_max)) );
	assert( (!p.lessOrGreaterThan(m_largeRange, m_min, m_max)) );

	std::cout << "All tests Passed!" << std::endl;

	system("Pause");
}*/