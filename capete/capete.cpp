#include <fstream>

using namespace std;

ifstream input("capete.in");
ofstream output("capete.out");

int numberOfHeads = 6;
int numberOfDays, lastDayHeads;

void processHeads()
{   
    lastDayHeads = numberOfHeads*numberOfDays-numberOfDays;
}

void read()
{
    input >> numberOfDays;
    input.close();
}

void write()
{
    output << lastDayHeads;
    output.close();
}

int main()
{
    read();
    processHeads();
    write();

    return 0;
};