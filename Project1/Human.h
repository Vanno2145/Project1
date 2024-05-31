#pragma once
class Human
{
	char* name;
	char* surname;
	int age;
public:
	Human();
	Human(char* n);
	Human(char* n, char* s);
	Human(char* n, char* s, int age);

	Human(const Human& first_human);

	void Name();
	void Surname();
	void Age();

	~Human();
};

