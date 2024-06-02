#pragma once
#include "Human.h"

class Flat
{
	int count;
	Human family[4];
public:
	Flat();//Construct by default

	void Copy(const Flat & f);//Copy construct
	void Addhuman(const Human& human);//Add humans in flat
	void Printhumans();//flat info

	~Flat();//Destruct
};

