#pragma once
#include "Animal.h"

class Cat : public Animal
{
protected:
	string name, breed;
public:
	Cat(string name, string breed) : Animal(14, 100), name(name), breed(breed)
	{
	}

	void speak() override
	{
		cout << "*" << name << " refuses to speak\n";
	}

};
