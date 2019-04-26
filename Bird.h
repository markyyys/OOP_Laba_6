#pragma once
#include "Alive.h"

class Bird : public Alive
{
protected:
	bool canFly = true;
	int stamina = 100;
public:
	Bird(int lfSpan, int stam) : Alive(lfSpan, stam), stamina(stam)
	{
		lifespan = lfSpan;
	}

	~Bird()
	{
	}

	void speak() override
	{
		cout << "Chirik... Chirik...\n";
	}

};
