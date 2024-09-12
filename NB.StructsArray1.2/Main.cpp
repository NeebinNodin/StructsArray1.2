//Neebin Buswa
//StructsArray1.2

#include <iostream>
#include <conio.h>

using namespace std;

struct Student
{
	string Name;
	double GPA;
};

int main()
{
	const int NUM_STUDENTS = 2;
	Student students[NUM_STUDENTS] = 
	{
		{ "Jim", 3.2 },
		{ "Sue", 3.8 }
	};

	float sum = 0;
	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		cout << students[i].Name << " has a GPA of " << students[i].GPA << "\n";
		sum += students[i].GPA;
	}

	cout << "The average GPA is: " << (sum / NUM_STUDENTS) << "\n";
	
	(void)_getch();
	return 0;
}

