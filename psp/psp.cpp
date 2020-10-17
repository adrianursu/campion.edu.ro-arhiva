#include <fstream>

using namespace std;

ifstream input("psp.in");
ofstream output("psp.out");

int numberOfGames, sizePSP, gamesInstalled;

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

    input >> numberOfGames >> sizePSP;
    for(int i = 0; i < numberOfGames; i++)
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