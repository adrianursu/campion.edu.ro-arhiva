#include <fstream>

using namespace std;

ifstream input("cuburi3.in");
ofstream output("cuburi3.out");

int countersDim[1001] = {};
int countersCol[1001] = {};
int n, d, c, nrTowersDim = 0, nrTowersCol = 0;

void processCounters(int counters[], int &nrTowers)
{
	for (int i = 1; i <= n; i++)
	{
		if (counters[i] != 0)
		{
			nrTowers++;
		}
	}
}

void foundCube()
{
	countersDim[d] = 1;
	countersCol[c] = 1;
}

void read()
{
	input >> n;
	for (int i = 0; i < n; i++)
	{
		input >> d >> c;
		foundCube();
	}

	input.close();
}

void write()
{
	if (nrTowersCol > nrTowersDim)
	{
		output << "D " << nrTowersDim;
	}
	else if (nrTowersCol < nrTowersDim)
	{
		output << "C " << nrTowersCol;
	}
	else
	{
		output << "DC " << nrTowersCol;
	}

	output.close();
}

int main()
{
	read();
	processCounters(countersDim, nrTowersDim);
	processCounters(countersCol, nrTowersCol);
	write();

	return 0;
}