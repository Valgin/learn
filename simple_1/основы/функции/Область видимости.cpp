/*Область видимости. Глобальные и локальные переменные*/

#include <iostream>
using namespace std;

int a;

void foo(int a)
{
	a++;

}


void main()
{
	setlocale(LC_ALL, "rus");
	
	foo(2);
	a++;

	cout << a << endl;

}
