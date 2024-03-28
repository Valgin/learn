/*
дз 10

Напишите функцию, меняющую местами значения переменных с помощью ссылко и шаблона.

*/


#include <iostream>
using namespace std;

template <typename T>
void Swap(T &pa, T &pb)
{
	
	T temp = pa;

	pa = pb;
	pb = temp;

}


void main()
{
	setlocale(LC_ALL, "rus");

	double a = 5.5, b = 6;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	Swap(a, b);

	cout << "foo" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}



