#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Programmer.h"
#include "Designer.h"
#include "Director.h"
using namespace std;

int main()
{
	Student a("Oleg",19,"Itstep",2000);
	a.Output();
	a.Input("Irina",20,"Politex",200);
	a.Output();

	Programmer p("Anna", 21, "middle", 2000);
	p.Output();
	p.Input("Irina", 20, "junior", 1000);
	p.Output();

	Designer d("Sonya", 30, "illustrator", 500);
	d.Output();
	d.Input("Irina", 20, "graphic", 200);
	d.Output();

	Director di("Nastya", 19, "BestCmpany", 300000);
	di.Output();
	d.Input("Irina", 20, "SecondCompany", 9000);
	d.Output();

}