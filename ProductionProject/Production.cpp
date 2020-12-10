#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

bool Production::checkValidInRange(int num)
{
	if (num < 1)
		return false;
	else if (num > 46)
		return false;
	else
		return true;

}
