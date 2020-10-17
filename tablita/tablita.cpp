#include <fstream>

using namespace std;

ifstream input("tablita.in");
ofstream output("tablita.out");

int n;

int getCurrentNr(int currentNr, int currentGroup)
{
	for (int i = 0; i < currentGroup; i++)
	{
		currentNr++;
	}

	return currentNr;
}

int getGroupNr()
{
	int currentNr = 1;
	int currentGroup = 1;

	while (currentNr < n)
	{
		currentGroup++;
		currentNr = getCurrentNr(currentNr, currentGroup);
	}

	return currentGroup;
}

void read()
{
	input >> n;
}

void write()
{
	output << getGroupNr();
}

int main()
{
	read();
	write();

	return 0;
}