#include <fstream>

using namespace std;

ifstream input("joc20.in");
ofstream output("joc20.out");

int cards[1000], n, andrei, tudor;
int choice, lIndex, rIndex;

void increasePointsOfPlayers(int index, int i)
{
	if (i % 2 == 0)
	{
		andrei = andrei + cards[index];
	}

	else if (i % 2 != 0)
	{
		tudor = tudor + cards[index];
	}
}

void processChoice(int choice, int i)
{
	switch (choice)
	{
	case 1:
		increasePointsOfPlayers(lIndex, i);
		lIndex++;
		break;

	case 2:
		increasePointsOfPlayers(rIndex, i);
		rIndex--;
		break;
	}
}

void read()
{
	input >> n;
	for (int i = 0; i < n; i++)
	{
		input >> cards[i];
	}

	lIndex = 0;
	rIndex = n - 1;

	for (int i = 0; i < n; i++)
	{
		input >> choice;
		processChoice(choice, i);
	}

	input.close();
}

void write()
{
	if (andrei > tudor)
	{
		output << andrei << " 1";
	}
	else if (andrei < tudor)
	{
		output << tudor << " 2";
	}
	else
	{
		output << andrei << " 0";
	}

	output.close();
}

int main()
{
	read();
	write();

	return 0;
}