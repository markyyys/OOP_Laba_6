#pragma once
#include <iostream>
#include <string>
using namespace std;

class Alive
{
protected:
	int lifespan = 70; //in years
	int daysUntilDeath = lifespan * 365;
	int stamina;
public:
	Alive(int lfSpan, int stam) : lifespan(lfSpan), daysUntilDeath(lfSpan * 365), stamina(stam)
	{
	}

	~Alive()
	{
		daysUntilDeath = 0;
	}

	virtual void speak() = 0;
};
