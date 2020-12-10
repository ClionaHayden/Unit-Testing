#include <iostream>
#include <assert.h>
#include <list>


#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	list<int> testNums = { 0, 1, 9, 45 };
	for (int n : testNums)
	{
		assert(p.checkValidInRange(n) == true);
	}

	std::cout << "Passed: Result in valid range" << std::endl;

	system("PAUSE");
}

bool checkInputGreaterZeroTrue()
{
	Production p;
	p.m_one = 20;
	p.m_two = 60;

	assert(p.f1(p.m_one, p.m_two) > 0);
	std::cout << "Passed: Result greater than 0" << std::endl;

	return true;
}