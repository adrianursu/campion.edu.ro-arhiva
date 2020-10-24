#include <fstream>

using namespace std;

ifstream input("magic6.in");
ofstream output("magic6.out");

char character;
int n;
int frequencyVector[10] = {};

void processCharacters()
{
	if (character > 47 && character < 58)
	{
		frequencyVector[character - '0'] = 1;
	}
	else
	{
		output << (char)(character - 32);
	}
}

void verifyFirstDigitAfter0(int &position)
{
	int i = 1;

	while (position < 0)
	{
		if (frequencyVector[i] == 1)
		{
			position = i;
		}
		else
		{
			i++;
		}
	}
	output << position << 0;
}

void outputNumbers(int &index)
{
	for (int i = index + 1; i < 10; i++)
	{
		if (frequencyVector[i] == 1)
		{
			output << i;
		}
	}
}

void processNumbers()
{
	int poz = -1;
	int k = 0;

	if (frequencyVector[0] == 1)
	{
		verifyFirstDigitAfter0(poz);
		outputNumbers(poz);
	}
	else
	{
		outputNumbers(k);
	}
}

void read()
{
	input >> n;

	for (int i = 1; i <= n; i++)
	{
		input >> character;
		processCharacters();
	}
}

int main()
{
	read();
	output << endl;
	processNumbers();

	return 0;
}
