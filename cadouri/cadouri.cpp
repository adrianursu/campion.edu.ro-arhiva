#include <fstream>

using namespace std;

ifstream input("cadouri.in");
ofstream output("cadouri.out");

int nrGirls, nrBoys, n, label, nrPresentsGirls, nrPresentsBoys;

void processNrPresentsForKids()
{
	label % 2 == 0 ? nrPresentsGirls++ : nrPresentsBoys++;
}

void read()
{
	input >> nrGirls >> nrBoys >> n;
	for (int i = 0; i < n; i++)
	{
		input >> label;
		processNrPresentsForKids();
	}

	input.close();
}

void writeMissedPresents(int nrPresents, int nrKids)
{
	if (nrPresents - nrKids >= 0)
	{
		output << 0;
	}
	else if (nrPresents - nrKids < 0)
	{
		output << nrKids - nrPresents;
	}
}

void write()
{
	writeMissedPresents(nrPresentsGirls, nrGirls);
	output << endl;
	writeMissedPresents(nrPresentsBoys, nrBoys);

	output.close();
}

int main()
{
	read();
	write();

	return 0;
}