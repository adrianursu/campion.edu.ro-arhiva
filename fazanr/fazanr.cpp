#include <fstream>

using namespace std;

ifstream input("fazanr.in");
ofstream output("fazanr.out");

int nrKids, carefulessKids, firstDigit, n[100] = {};

void read()
{
    input >> nrKids;
    for (int i = 0; i < nrKids; i++)
    {
        input >> n[i];
    }

    input.close();
}

int getFirstDigit(int number)
{   
    while (number > 10)
    {
        number /= 10;
    }

    return number;
}

void processNumber()
{
    for (int i = 0; i < nrKids - 1; i++)
    {
        firstDigit = getFirstDigit(n[i+1]);
        if (n[i] % 10 != firstDigit)
        {
            carefulessKids++;
        }
    }
}

void write()
{
    output << carefulessKids;

    output.close();
}

int main()
{
    read();
    processNumber();
    write();

    return 0;
}