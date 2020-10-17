#include <fstream>

using namespace std;

ifstream input("sume4.in");
ofstream output("sume4.out");

int numberOfCards, amountAna, amountMaria;

void processCard(int idCard)
{
	int middleDigit = idCard / 100 % 10;
	int firstTwoDigits = idCard / 1000;
	int lastTwoDigits = idCard % 100;

	amountAna += firstTwoDigits;
	amountMaria += lastTwoDigits;

	if (firstTwoDigits > lastTwoDigits)
	{
		amountMaria += middleDigit;
	}
	else if (firstTwoDigits < lastTwoDigits)
	{
		amountAna += middleDigit;
	}
}

void read()
{
	int idCard;

	input >> numberOfCards;
	for (int i = 0; i < numberOfCards; i++)
	{
		input >> idCard;
		processCard(idCard);
	}
}

void write()
{
	output << amountAna << " " << amountMaria;
}

int main()
{
	read();
	write();

	return 0;
}