#include <fstream>

using namespace std;

ifstream input("porumb.in");
ofstream output("porumb.out");

int nrLines, initialPosition, seconds, moves;

void moveDestroyer()
{
	if (initialPosition > nrLines / 2)
	{
		moves = nrLines - initialPosition;
	}
	else
	{
		moves = initialPosition - 1;
	}
}

void calculateTime(int n)
{
	seconds += n + 1;
}

void read()
{
	input >> nrLines >> initialPosition;
	moveDestroyer();

	int nrCornsPerLine;
	for (int i = 1; i <= nrLines; i++)
	{
		input >> nrCornsPerLine;
		calculateTime(nrCornsPerLine);
	}

	input.close();
}

void write()
{
	output << seconds + moves - 1;

	output.close();
}

int main()
{
	read();
	write();

	return 0;
}