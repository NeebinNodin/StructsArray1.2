//Neebin Buswa
//StructsArray1.2

#include <iostream>
#include <conio.h>

using namespace std;

struct Course
{
	string Name;
	int Credits;
};

int main()
{
	const int NUM_COURSES = 4;
	Course courses[NUM_COURSES] =
	{
		{"Intro to Programming", 3},
		{"Data Structures", 4},
		{"Algorithms", 4},
		{"Intermediate Programming", 3}
	};

	for (int i = 0; i < NUM_COURSES; i++)
	{
		cout << "Courses: " << courses[i].Name << "\n";
		cout << "Credits: " << courses[i].Credits << "\n\n";
	}

	(void)_getch();
	return 0;
};
		//struct Student
		//{
		//	string Name;
		//	float GPA = 0;
		//	int Courses[3];
		//};

		//int main()
		//{
		//	const int NUM_STUDENTS = 2;
		//	Student students[NUM_STUDENTS] = 
		//	{
		//		{ "Jim", 3.2, {1, 2, 5} },
		//		{ "Sue", 3.8, {3, 4, 5} }
		//	};
		//
		//	float sum = 0;
		//	for (int i = 0; i < NUM_STUDENTS; i++)
		//	{
		//		cout << students[i].Name << " has a GPA of " << students[i].GPA << " - ";
		//		for (int j = 0; j < 3; j++) cout << students[i].Courses[j] << ", ";
		//		cout << "\n";
		//		sum += students[i].GPA;
		//	}
		//
		//	cout << "The average GPA is: " << (sum / NUM_STUDENTS);
		//	
		//	(void)_getch();
		//	return 0;
		//}

