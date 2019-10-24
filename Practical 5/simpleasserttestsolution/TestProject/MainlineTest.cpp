#include <iostream>
#include <vector>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	int a = 10;
	vector<int> m_list;

	m_list.push_back(1);
	m_list.push_back(2);
	m_list.push_back(3);
	m_list.push_back(4);
	m_list.push_back(5);
	m_list.push_back(6);


	/*cout << p.someMethod(a) << endl;
	assert(p.someMethod(a) == 0);
	assert(p.someMethod(a) == 1);*/

	assert(m_list.size() > 6);
	for (int i = 0; i < m_list.size(); i++)//int i = 0; i < m_list.size(); i++)
	{
		assert(m_list[i] < 1);
		assert(m_list[i] > 46);

		for (int j = i + 1; j < m_list.size(); j++)
		{
			assert(j == i);
		}


		cin.get();
	}
}