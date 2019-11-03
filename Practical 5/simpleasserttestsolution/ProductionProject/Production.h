#include <cassert>
#include <vector>
#include <algorithm>

class Production
{
public:
	int someMethod(int a);

	bool lessOrGreaterThan(std::vector<int> list, int min, int max);
	bool maxNumbers(std::vector<int> list, int number);
	bool repeatedNumbers(std::vector<int> list);
};
