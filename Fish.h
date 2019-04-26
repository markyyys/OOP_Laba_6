#pragma once
#include "Alive.h"

class Fish :
	public Alive
{
public:
	bool water_type = false; // 0 - �������, 1 - �������
	Fish(int lfSpan, int stam, bool w_type) : Alive(lfSpan, stam), water_type(w_type)
	{
	}

	~Fish()
	{
	}

	void speak() override
	{
		cout << "Bulk... Bulk...\n";
	}
};
