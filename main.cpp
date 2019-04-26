#include <iostream>
#include "ElderStudent.h"
#include "Bird.h"
#include "Fish.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	ElderStudent eStudent = ElderStudent("Alexey", "Nesterov", 19, 110);
	eStudent.printStudent();

	cout << endl;

	Student student1("Sergey", "Svorostov", 15, 100);
	student1.passExam();
	student1.printStudent();

	cout << endl;

	student1.debts++;
	eStudent.removeDebt(student1);
	eStudent.tellInfo();
	eStudent.tellInfo();
	eStudent.tellInfo();
	eStudent.tellInfo();

	cout << endl;


	Bird bird1(10, 1);
	bird1.speak();
	Fish fish1(4, 10, 1);
	fish1.speak();

	cout << endl;

	Dog barry("B", "C");
	barry.speak();
	Cat thomas("Thomas", "Sphinks");
	thomas.speak();
	system("pause");
	return 0;
}
