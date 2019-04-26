#pragma once
#include "Animal.h"

class Dog : public Animal
{
protected:
	string name, breed;
public:
	Dog(string name, string breed) : Animal(14, 100), name(name), breed(breed){}

	void speak() override
	{
		cout << "Bark... Bark...\n";
	}

};
