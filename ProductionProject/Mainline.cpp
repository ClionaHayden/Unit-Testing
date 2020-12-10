#include "Production.h"
#include "LottoCard.h"


int main()
{
	vector<LottoCard> cards;
	int cardAmount;

	cout << "Please enter amount of cards to play" << endl;
	cin >> cardAmount;
	//-------------------
	// enter numbers
	//-------------------
	for (int c = 0; c < cardAmount; c++)
	{
		LottoCard card;
		int num;
		for (int i = 0; i < card.getMaxNums();)
		{
			cout << "Card number: " << c + 1 << endl;
			cout << endl;
			cout << "Enter number: ";
			cin >> num;
			if (card.addNum(num))
			{
				cout << "added" << endl;
				i++;
			}
			else
			{
				cout << "invalid number. Enter number 0-46" << endl;
			}
			card.print();
			cout << endl;
		}
		cards.push_back(card);
	}

	//-------------------
	// Roll lotto numbers
	//-------------------
	list<int> resultNums;
	for (int i = 0; i < 6; i++)
	{
		int num = rand() % 46;
		resultNums.push_back(num);
	}
	cout << endl << "RESULT" << endl;
	for (int i : resultNums)
	{
		cout << to_string(i) << " ";
	}
	cout << endl;

	//-------------------
	// Check against cards
	//-------------------
	int matchedNums = 0;
	for (int c = 0; c < cardAmount; c++)
	{
		vector<bool> resultBools =  cards[c].checkResult(resultNums);
		for (bool res : resultBools)
		{
			if (res)
			{
				matchedNums++;
			}
		}
		cout << "Card number: " << to_string(c + 1) << ": " << to_string(matchedNums) << " numbers matched!" << endl;
	}


	//Production p;
	//p.someMethod(10);

	//int result = 0;
	//std::cin >> result;

	//bool isValid = p.checkValidInRange(result);

	system("pause");
	return 0;
}
