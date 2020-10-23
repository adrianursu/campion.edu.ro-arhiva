#include <fstream>

using namespace std;

ifstream input("magic6.in");
ofstream output("magic6.out");

char character;
int n;
int frequencyVector[10] = {};

void verifyIfItsIntegerOrChar()
{
	if (character > 47 && character < 58)
	{
		frequencyVector[character - '0'] = 1;
	}
	else
	{
		character = (char)(character - 32);
		output << character;
	}
}

void writeNumbers()
{
	int poz = -1;
	int i = 1;

	if (frequencyVector[0] == 1)
	{

		while (poz < 0)
		{
			if (frequencyVector[i] == 1)
			{
				poz = i;
			}
			else
			{
				i++;
			}
		}
		output << poz << 0;
		for (int i = poz + 1; i < 10; i++)
		{
			if (frequencyVector[i] == 1)
			{
				output << i;
			}
		}
	}
	else
	{
		for (int i = 1; i < 10; i++)
		{
			if (frequencyVector[i] == 1)
			{
				output << i;
			}
		}
	}
}

void readAndWriteLetters()
{
	input >> n;

	for (int i = 1; i <= n; i++)
	{
		input >> character;
		verifyIfItsIntegerOrChar();
	}
}

int main()
{
	readAndWriteLetters();
	output << endl;
	writeNumbers();

	return 0;
}
