#include "House.h"
#include <iostream>

using namespace std;

House::House()
{
	house[0];
	count = 0;
}

void House::Copy(const House & h)
{
	count = h.count;
	house[9] = h.house[9];
}

void House::Addflat(Flat& flat)
{
	house[count] = flat;
	count++;
}

void House::Print()
{
	cout << "All Flats: " << endl << endl << endl;
	for (int i = 0; i < count; i++) {
		house[i].Printhumans();
	}
}

House::~House()
{
	delete[] house;
}
