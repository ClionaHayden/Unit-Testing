#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

bool Production::checkValidInRange(int num)
{
	if (num < 0)
		return false;
	else if (num > 46)
		return false;
	else
		return true;

}

void Production::takeInput()
{
	while (m_one <= 0)
	{
		std::cout << "Enter Number 1" << std::endl;
		std::cin >> m_one;
	}
	while (m_two <= 0)
	{
	std:std::cout << "Enter Number 2" << std::endl;
		std::cin >> m_two;
	}
}

int Production::f1(int x, int y)
{
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}
