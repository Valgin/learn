/*
	Передача аргументов по указателю
	Как вернуть два и более значения из функции


	функция может возвращать более одного значения и это можно сделать
	с помощью указателей
*/


#include <iostream>
using namespace std;


void Foo(int *pa)
{
	(*pa)++;
}


void main()
{
	setlocale(LC_ALL, "rus");

	int	a  = 0;

	cout << a << endl;

	Foo(&a);

	cout << a << endl;

}



