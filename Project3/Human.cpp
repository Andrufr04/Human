#include "Human.h"
#include<iostream>
using namespace std;

Human::Human()
{
	cout << "Construct Human\n";
	name = nullptr;
	age = 0;
}
Human::Human(const char* Name, int Age)
{
	cout << "Construct Human\n";
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;
}

void Human::Output()
{
	cout << "Output Human\n";
	cout << "Name: " << name << endl
		<< "Age: " << age << endl;
}
void Human::Input(const char* n, int a)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
}
void Human::Salary()
{
	cout << "Unknown" << endl;
}
//void Human::Input() // ввод с клавиатуры
//{
//	if (name != nullptr)
//	{
//		delete[] name;
//	}
//	char buff[20];
//	cout << "Enter name -> ";
//	cin >> buff;
//	name = new char[strlen(buff) + 1];
//	strcpy_s(name, strlen(buff) + 1, buff);
//	cout << "Enter age -> ";
//	cin >> age;
//
//}
Human::~Human()
{
	delete[] name;
	cout << "Destruct Human\n";
}
