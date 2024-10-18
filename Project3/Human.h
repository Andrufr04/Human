#pragma once
class Human  // base class
{
protected:
	char* name;
	int age;
public:
	Human();
	Human(const char* Name, int Age);
	virtual void Output();
	virtual void Input(const char* n, int a);
	virtual void Salary();



	virtual ~Human() =0;
};