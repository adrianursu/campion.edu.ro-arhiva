#include <fstream>

using namespace std;

ifstream input("bancomat.in");
ofstream output("bancomat.out");

int amount, numberOfTransactions, idTransaction;

void processTransaction(int idTransaction)
{	
	int currentAmountTransaction = idTransaction / 10;

	switch (idTransaction % 10)
	{
	case 2:
		amount = amount + currentAmountTransaction;
		break;

	case 3:
		if (amount >= currentAmountTransaction)
		{
			amount = amount - currentAmountTransaction;
		}
		break;
	}
}

void read()
{
	input >> amount;
	input >> numberOfTransactions;
	for (int i = 0; i < numberOfTransactions; i++)
	{
		input >> idTransaction;
		processTransaction(idTransaction);
	}
}

void write()
{
	output << amount;
}

int main()
{
	read();
	write();

	return 0;
}