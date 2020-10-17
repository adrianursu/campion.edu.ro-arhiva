#include <fstream>

using namespace std;

ifstream input("comori.in");
ofstream output("comori.out");

int n, x, y, d, p;

void processTreasureCoordonations()
{
	switch (d)
	{
	case 1:
		y = y + p;
		break;

	case 2:
		x = x + p;
		y = y + p;
		break;

	case 3:
		x = x + p;
		break;

	case 4:
		x = x + p;
		y = y - p;
		break;

	case 5:
		y = y - p;
		break;

	case 6:
		x = x - p;
		y = y - p;
		break;

	case 7:
		x = x - p;
		break;

	case 8:
		x = x - p;
		y = y + p;
		break;
	}
}

void read()
{
	input >> n;

	x = 0;
	y = 0;

	for (int i = 0; i < n; i++)
	{
		input >> d >> p;
		processTreasureCoordonations();
	}

	input.close();
}

void write()
{
	output << x << ' ' << y;

	output.close();
}

int main()
{
	read();
	write();
	
	return 0;
}