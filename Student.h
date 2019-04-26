#pragma once
#include <string>
#include <iostream>

using namespace std;

class Student
{
protected:
	string name, surname;
	int age, IQ;
public:
	int debts = 0;

	Student(string n, string sn, int a, int iq) : name(n), surname(sn), age(a), IQ(iq)
	{
	}

	~Student()
	{
	}

	void printStudent()
	{
		std::cout << "Student: " << name << " " << surname << ". " << age << " years old." << std::endl;
	}

	void passExam()
	{
		if (IQ < 100)
		{
			debts++;
			IQ += 10;
			cout << "Student " << name << " " << surname << " has failed exam. current IQ: " << IQ <<
				". current debts: " <<
				debts << ".\n";
		}
		else
		{
			IQ += 5;
			cout << "Student " << name << " " << surname << " has successfully passed exam. current IQ: " << IQ <<
				". current debts: " << debts << ".\n";
		}
	}
};
