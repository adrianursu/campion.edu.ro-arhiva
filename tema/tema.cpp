#include <fstream>

using namespace std;

ifstream input("tema.in");
ofstream output("tema.out");

int numberStudents, students[100] = {};

void read()
{
	int idStudent, numberStudentsSent;

	input >> numberStudents;
	input >> numberStudentsSent;

	for (int i = 0; i < numberStudentsSent; i++)
	{
		input >> idStudent;

		students[idStudent] = 1;
	}
}

void write()
{
	for (int i = 1; i <= numberStudents; i++)
	{
		if (students[i] == 0)
		{
			output << i << " ";
		}
	}
}

int main()
{
	read();
	write();

	return 0;
}