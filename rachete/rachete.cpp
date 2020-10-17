#include <fstream>

using namespace std;

ifstream input("rachete.in");
ofstream output("rachete.out");

int n, label, counter1, counter2, counter3;

void processLabel()
{
	switch (label)
	{
	case 1:
		counter1++;
		break;

	case 2:
		counter2++;
		break;

	case 3:
		counter3++;
		break;
	}
}

void read()
{
	input >> n;
	for (int i = 0; i < n; i++)
	{
		input >> label;
		processLabel();
	}

	input.close();
}

void outputSpecificLabel(int counter, int label)
{
	for (int i = 0; i < counter; i++)
	{
		output << label << " ";
	}
}

void write()
{
	outputSpecificLabel(counter1, 1);
	outputSpecificLabel(counter2, 2);
	outputSpecificLabel(counter3, 3);

	output.close();
}

int main()
{
	read();
	write();

	return 0;
}