#include <fstream>

using namespace std;

ifstream input("psp.in");
ofstream output("psp.out");

int nrGames, sizePSP, gamesInstalled;

void processSizeGame(int sizeGame)
{
   if(sizeGame <= sizePSP)
    {
        sizePSP -= sizeGame;
        gamesInstalled++;
    }
   
}

void read()
{
    int  sizeGame;

    input >> nrGames >> sizePSP;
    for(int i = 0; i < nrGames; i++)
    {
        input >> sizeGame;
        processSizeGame(sizeGame);
    }
    input.close();
}

void write()
{
    output << gamesInstalled << ' ' << sizePSP;
    output.close();
}

int main()
{
    read();
    write();

    return 0;
}