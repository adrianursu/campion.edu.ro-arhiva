#include <fstream>

using namespace std;

ifstream input("case1.in");
ofstream output("case1.out");

int nrHouses, idHouse, grade1, grade2, grade3, nrMen, nrWomen, nrKids;

void processHouse(int idHouse)
{
	switch (idHouse / 1000)
	{
	case 1:
		grade1++;
		break;
	case 2:
		grade2++;
		break;
	case 3:
		grade3++;
		break;
	}

	nrMen = nrMen + (idHouse / 100 % 10);
	nrWomen = nrWomen + (idHouse % 100 / 10);
	nrKids = nrKids + (idHouse % 10);
}

void read()
{
	input >> nrHouses;
	for (int i = 0; i < nrHouses; i++)
	{
		input >> idHouse;
		processHouse(idHouse);
	}
}

void write()
{
	output << grade1 << endl;
	output << grade2 << endl;
	output << grade3 << endl;
	output << nrMen << endl;
	output << nrWomen << endl;
	output << nrKids << endl;
}

int main()
{
	read();
	write();

	return 0;
}