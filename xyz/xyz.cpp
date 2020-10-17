#include <fstream>

using namespace std;

ifstream input("xyz.in");
ofstream output("xyz.out");
int x, y, z;

void read()
{
	input >> x >> y >> z;
}

void constructNumberXYZ() 
{
	//First digit
	output << y; 
	//Next x-1 digits
	for (int i = 0; i < x - 1; i++)
	{ 
		output << z;
	}
}

int main()
{
	read();
	constructNumberXYZ();
	
	return 0;
}