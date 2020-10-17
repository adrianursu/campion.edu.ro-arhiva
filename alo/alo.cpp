#include <fstream>

using namespace std;

ifstream input("alo.in");
ofstream output("alo.out");

int e, n, d, nr;

void processCredit(int nr, int d)
{
	if (nr % 10 == 9)
	{
		return;
	}
	else if (nr % 10 == 5)
	{
		if (nr / 10000 == 1)
		{
			e = e - 2 * d;
		}
		else if (nr / 10000 == 2)
		{
			e = e + d;
		}
	}
}

void read()
{
	input >> e >> n;
	for (int i = 0; i < n; i++)
	{
		input >> nr >> d;
		processCredit(nr, d);
	}
}

void write()
{
	output << e;
}

int main()
{
	read();
	write();

	return 0;
}