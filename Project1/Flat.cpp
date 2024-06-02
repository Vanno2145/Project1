#include "Flat.h"
#include "Human.h"
#include <iostream>

using namespace std;

Flat::Flat()
{
	family[0];
	count = 0;
}

void Flat::Copy(const Flat & f)
{
	family[4] = f.family[4];
	count = f.count;
}

void Flat::Addhuman(const Human& human)
{
	family[count] = human;
	count++;
}

void Flat::Printhumans()
{
	cout << "Peoples in flat: " << endl << endl;
	for (int i = 0; i != count; i++) {
		 family[i].Print();
	}
}

Flat::~Flat()
{
	delete[] family;
}


