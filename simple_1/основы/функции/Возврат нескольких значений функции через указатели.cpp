/*
	Передача аргументов по указателю
	Как вернуть два и более значения из функции


	функция может возвращать более одного значения и это можно сделать
	с помощью указателей
*/


#include <iostream>
using namespace std;


void Foo(int *pa, int *pb, int *pc)
{
	(*pa) = 555;

	(*pb)++;

	(*pc) = -20;

}


void main()
{
	setlocale(LC_ALL, "rus");

	int	a  = 0, b = 0, c = 1;

	cout <<	"a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << "foo" << endl;
	Foo(&a, &b, &c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

}



