#include <fstream>

using namespace std;

fstream input("ingerasi.in");
ofstream output("ingerasi.out");

int heightCloud[100] = {}, numberOfAngels;

bool areElementsEqual()
{
	for (int i = 0; i < numberOfAngels - 1; i++)
	{
		if (heightCloud[i] != heightCloud[i + 1])
		{
			return false;
		}
	}
	return true;
}

int getCGD(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void processGCD()
{
	while (!areElementsEqual())
	{
		for (int i = 0; i < numberOfAngels - 1; i++)
		{
			heightCloud[i] = getCGD(heightCloud[i], heightCloud[i + 1]);
			heightCloud[i + 1] = heightCloud[i];
		}
	}
}

void read()
{
	input >> numberOfAngels;
	for (int i = 0; i < numberOfAngels; i++)
	{
		input >> heightCloud[i];
	}
	input.close();
}

void write()
{
	output << heightCloud[0];
	output.close();
}

int main()
{
	read();
	processGCD();
	write();

	return 0;
}