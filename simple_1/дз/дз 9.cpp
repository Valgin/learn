/*
дз 9

Напишите функцию, меняющую местами значения переменных с помощью указателей.

*/


#include <iostream>
using namespace std;

template <typename T1, typename T2>
void Swap(T1 *pa, T2 *pb)
{
	int temp = *pa;

	*pa = *pb;
	*pb = temp;

}


void main()
{
	setlocale(LC_ALL, "rus");

	double a = 5.5, b = 6;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	Swap(&a, &b);

	cout << "foo" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}



