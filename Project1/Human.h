#pragma once
class Human
{
	char* name;
	char* surname;
	int age;
public:
	Human();//Construct by default
	Human(const char* n);//Construct by 1 params
	Human(const char* n, const char* s);//Construct by 2 params and Delegation
	Human(const char* n, const char* s, int a);//Construct by 3 params and Delegation

	void Copy(const Human& first_human);//Copy construct
	void Name();//Name initiation
	void Surname();//Surname initiation
	void Age();//Age initiation
	void Print();//Print info

	~Human();//Destruct
};

