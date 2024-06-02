#include <iostream>
#include "Human.h"
#include "House.h"
#include "Flat.h"
using namespace std;

int main() {

	cout << endl << endl;

	Flat first_flat;//Create first flat

	Human first("Oleg", "Surm", 45);//Create first person in flat 1

	Human second("Ilya", "Surn", 17);//Create second person in flat 1

	first_flat.Addhuman(first);//Add person in flat
	first_flat.Addhuman(second);//Add person in flat

	Flat second_flat;

	Human thid("Daniil", "Surm", 32);//Create first person in flat 2

	Human fourth("Vova", "Surn", 63);//Create first person in flat 2

	second_flat.Addhuman(thid);//Add person in flat
	second_flat.Addhuman(fourth);//Add person in flat

	House house;//Creat house

	house.Addflat(first_flat);//Add flat 1 in house
	house.Addflat(second_flat);//Add flat 2 in house

	house.Print();//Print all flats and peoples in house

}