#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

class LottoCard
{
public:
	LottoCard();
	~LottoCard();
	bool addNum(int t_num);
	vector<int> getNumbers() { return m_numbers; };
	int getMaxNums() { return MAX_NUMBERS; };
	void print();
	vector<bool> checkResult(list<int> t_resNums);
private:
	vector<int> m_numbers;
	const int MAX_NUMBERS = 6;

	bool CheckDuplicate(int t_num);
};
