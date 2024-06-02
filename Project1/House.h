#pragma once
#include "Flat.h"

class House
{
	int count;
	Flat house[9];
public:
	House();//Construct by default

	void Copy(const House & h);//Copy construct
	void Addflat(Flat& flat);//Add flat in house
	void Print();//House info

	~House();//Destruct
};

