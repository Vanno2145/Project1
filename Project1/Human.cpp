#include "Human.h"
#include <iostream>

using namespace std;

Human::Human()
{
	name = nullptr;
	surname = nullptr;
	age = 0;
}//Construct by default

Human::Human(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}//Construct by 1 params

Human::Human(const char* n, const char* s) :Human(n)
{
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
}//Construct by 2 params

Human::Human(const char* n, const char* s, int a):Human(n, s)
{
	age = a;
}//Construct by 3 params

void Human::Copy(const Human& first_human)
{
	name = new char[strlen(first_human.name) + 1];
	strcpy_s(name, strlen(first_human.name) + 1, name);

	surname = new char[strlen(first_human.surname) + 1];
	strcpy_s(surname, strlen(first_human.surname) + 1, surname);

	age = first_human.age;
}//Copy constructor

void Human::Name()
{
	char* Name = new char[10];
	cout << "Enter your name: ";
	cin >> Name;

	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
}//Iniåializator name

void Human::Surname()
{
	char* Surname = new char[10];
	cout << "Enter your surname: ";
	cin >> Surname;

	surname = new char[strlen(Surname) + 1];
	strcpy_s(surname, strlen(Surname) + 1, Surname);
}//Iniåializator surname

void Human::Age()
{
	int Age;
	cout << "Enter your age: ";
	cin >> Age;

	age = Age;
}
void Human::Print()
{
	cout << "Name: " << name << endl
		<< "Surname: " << surname << endl
		<< "Age: " << age << endl << endl;
}


Human::~Human()
{
	delete[] name;
	delete[] surname;
}//Destruct
