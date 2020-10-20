#include <fstream>

using namespace std;

ifstream input("robinson.in");
ofstream output("robinson.out");

int m, n, a[21][21], i, j, north, south, east, west;

void verifyLastElementOfMatrix()
{
	if (a[m][m] > 999)
	{
		a[m][m] %= 1000;
	}
}

void readMatrix()
{
	input >> m >> n >> i >> j;
	a[1][1] = n;
	int k = 0;
	int y = 0;

	for (int i = 2; i < m + 1; i++)
	{
		for (int j = 1; j <= 1; j++)
		{
			k++;
			a[i][j] = n + k;
		}
	}

	for (int j = 2; j < m + 1; j++)
	{
		for (int i = 1; i <= 1; i++)
		{
			y++;
			a[i][j] = n + y;
		}
	}

	for (int i = 2; i < m + 1; i++)
	{
		for (int j = 2; j < m + 1; j++)
		{
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	verifyLastElementOfMatrix();
}

// void calculateMap()
// {

// 	int position = a[i][j];
// 	north = a[i - 1][j];
// 	south = a[i + 2][j];
// 	east = a[i][j + 1];
// 	west = a[i][j - 1];
	
// 	{
// 		switch (position % 4)
// 		{
// 		case 0:
// 			position = north;
// 			output << i << " " << j;
// 			break;
// 		case 1:
// 			position = east;
// 			output << i << " " << j;
// 			break;
// 		case 2:
// 			position = south;
// 			output << i << " " << j;
// 			break;
// 		case 3:
// 			position = west;
// 			output << i << " " << j;
// 			break;
// 		}
// 	}
// }

int main()
{
	readMatrix();
	// calculateMap();
	output << a[m][m];
	return 0;
}