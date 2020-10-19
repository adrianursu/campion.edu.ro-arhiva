#include <fstream>

using namespace std;

ifstream input("porumb.in");
ofstream output("porumb.out");

int n, m, a, seconds, moves;

void processSeconds()
{
	seconds = seconds + a + 1;
}

void processCorns()
{
	if (n == m || n - m == n - 1)
	{
		processSeconds();
	}

	else if (m >= n / 2)
	{
		moves = n - m;
		processSeconds();
	}

	else if (m < n / 2)
	{
		moves = m - 1;
		processSeconds();
	}
}

void read()
{
	input >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		input >> a;
		processCorns();
	}

	input.close();
}

void write()
{
	output << seconds - 1 + moves;

	output.close();
}

int main()
{
	read();
	write();

	return 0;
}