#include <iostream>
#include <assert.h>


#include "../ProductionProject/Production.h"


int main()
{
	Production p;
	
	int result = 0;
	std::cin >> result;

	assert(p.checkValidInRange(result) == true);
	std::cout << "Passed: Result in valid range" << std::endl;

	system("PAUSE");
}