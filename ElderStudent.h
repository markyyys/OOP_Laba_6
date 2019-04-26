#pragma once
#include "Student.h"
#include <iostream>

using namespace std;

class ElderStudent :
	public Student
{
protected:
	int responsibility = 20;
public:
	ElderStudent(string n, string sn, int a, int iq) : Student(n, sn, a, iq)
	{
	}

	void printStudent()
	{
		cout << "Elder student: " << name << " " << surname << ". " << age << " years old." << endl;
	}

	void tellInfo()
	{
		if (responsibility < 20)
		{
			cout << "Not yet implemented. sorry :3" << endl;
			responsibility += 10;
		}
		else
		{
			cout << "Starosta told info.\n";
			responsibility -= 20;
		}
	}

	void removeDebt(Student student)
	{
		if (responsibility >= 20)
			student.debts--;
		else
			cout << "Sorry my friend, your debt - your problem.\n";
	}
};
