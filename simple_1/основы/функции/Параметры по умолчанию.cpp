/*Аргументы (параметры) по умолчанию*/

/*

Параметр по умолчанию позволяет не передавать аргумент в функцию

параметры со значением идут после параметры без значения
*/

#include <iostream>
using namespace std;

void foo(int a = 5)
{
	for (int i = 0; i < a; i++)
	{

		cout << "#" << endl;

	}

}


void main()
{
	setlocale(LC_ALL, "rus");
	
	foo();



}

