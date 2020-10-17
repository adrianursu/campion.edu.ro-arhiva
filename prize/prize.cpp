#include <fstream>

using namespace std;

ifstream input("prize.in");
ofstream output("prize.out");

int n, nrPlugs;
long long int nrAvailablePlugs;

void read()
{
	nrAvailablePlugs = 0;

	input >> n;
	for (int i = 0; i < n - 1; i++)
	{
		input >> nrPlugs;
		nrAvailablePlugs += nrPlugs - 1;
	}

	input >> nrPlugs;
	nrAvailablePlugs += nrPlugs;

	input.close();
}

void write()
{
	output << nrAvailablePlugs;
	output.close();
}

int main()
{
	read();
	write();

	return 0;
}