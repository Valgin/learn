/*

	Ссылочные параметры. Передача аргументов по ссылке

*/


#include <iostream>
using namespace std;


void Foo(int a)
{

	a = 1;

}

//параметр по ссылке
void Foo2(int &a)
{
	//ссылочный тип не нужно разыменовывать
	a = 2;

}


void Foo3(int *a)
{

	*a = 3;

}


void main()
{
	int value = 5;
	cout << "value = " << value << endl << endl;

	cout << "Foo:" <<  endl;
	Foo(value);
	cout << "value = " << value<<  endl << endl;


	cout << "Foo2:" <<  endl;
	Foo2(value);
	cout << "value = " << value << endl << endl;


	cout << "Foo3:" <<  endl;
	Foo3(&value);
	cout << "value = " << value << endl << endl;

	cout << "value = " << value << endl;

}



