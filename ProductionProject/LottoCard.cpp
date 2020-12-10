#include "LottoCard.h"

LottoCard::LottoCard()
{
}

LottoCard::~LottoCard()
{
}

bool LottoCard::addNum(int t_num)
{
	if (t_num >= 0 && t_num <= 46)
	{
		if (m_numbers.size() < MAX_NUMBERS)
		{
			if (m_numbers.size() > 0)
			{
				for (int i : m_numbers)
				{
					if (!CheckDuplicate(t_num))
					{
						m_numbers.push_back(t_num);
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			else
			{
				m_numbers.push_back(t_num);
				return true;
			}
		}
	}
	return false;
}

void LottoCard::print()
{
	if (m_numbers.size() > 0)
	{
		for (int i : m_numbers)
		{
			cout << to_string(i) + " ";
		}
	}
	else
	{
		cout << "No numbers entered on card" << endl;
	}
}

vector<bool> LottoCard::checkResult(list<int> t_resNums)
{
	vector<bool> results;
	for (int i = 0; i < MAX_NUMBERS; i++)
	{
		if (i == m_numbers[i])
		{
			results.push_back(true);
		}
		else
		{
			results.push_back(false);
		}
	}
	return results;
}

bool LottoCard::CheckDuplicate(int t_num)
{
	bool duplicate = false;
	for (int i : m_numbers)
	{
		if (t_num == i)
		{
			duplicate = true;
		}
	}
	return duplicate;
}
