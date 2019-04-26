#pragma once
#include "Alive.h"

class Animal :
	public Alive
{
public:
	Animal(int lfSpan, int stam) : Alive(lfSpan, stam)
	{
		lifespan = lfSpan;
	}

	~Animal()
	{
	}

	virtual void speak() override = 0;
};
