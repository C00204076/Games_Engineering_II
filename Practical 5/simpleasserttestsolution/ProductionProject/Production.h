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


	/*
	int f1(int x,int y){

	1 while (x != y){
	
	2 if (x>y) then
	
	3 x=x-y;
	
	4 else y=y-x;
	
	5 }
	
	6 return x; }
	*/
	bool controlLessOrGreater(std::vector<int> list, int min, int max);
	bool controlMax(std::vector<int> list, int number);
	bool controlRepeated(std::vector<int> list);
};
