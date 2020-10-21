#include <fstream>

using namespace std;

ifstream input("robinson.in");
ofstream output("robinson.out");

int m, n, a[21][21], c, l;

void initializeFirstRowAndFirstColumn()
{
	input >> m >> n >> l >> c;

	for (int i = 1; i <= m; i++)
	{
		a[i][1] = n + i - 1;
		a[1][i] = n + i - 1;
	}
}

void initializeRestOfMatrix()
{
	for (int i = 2; i <= m; i++)
	{
		for (int j = 2; j <= m; j++)
		{
			a[i][j] = (a[i - 1][j] + a[i][j - 1]) % 1000;
		}
	}
}

void calculateMap()
{
	int temp;

	while (l <= m && l > 0 && c <= m && c > 0 && a[l][c] > 0)
	{
		output << l << " " << c << endl;

		temp = a[l][c];
		a[l][c] = -1;

		switch (temp % 4)
		{
		case 0:
			l--;
			break;
		case 1:
			c++;
			break;
		case 2:
			l++;
			break;
		case 3:
			c--;
			break;
		}
	}
}

int main()
{
	initializeFirstRowAndFirstColumn();
	initializeRestOfMatrix();
	output << a[m][m] << endl;
	calculateMap();

	return 0;
}