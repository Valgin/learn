/*Прототипы функий*/

#include <iostream>
using namespace std;

void foo(int a, int b); // прототип функции


void main()
{
	setlocale(LC_ALL, "rus");

	foo(1, 2);

}

void foo(int a, int b) //сама функция
{

	cout << "Я функция, меня вызвали " << a  << ' ' << b << endl;
}