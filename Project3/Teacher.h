#pragma once
#include "Human.h"
class Teacher :public Human
{
	char* EducationalInstitution;
	double Salary;
public:
	Teacher();
	Teacher(const char* n, int a, const char* E, double S);
	~Teacher();
	void Output();
	void Input(const char* n, int a, const char* E, double S);

};
