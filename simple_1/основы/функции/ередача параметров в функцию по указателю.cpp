
/*	
*	Передача аргументов по указателю
*	Как вернуть два и более значения из функции
*
*
*
*/


#include <iostream>
using namespace std;

void Foo(int *pa)
{
	(*pa)++; // Нужно соблюдать приоритет операций
}

void main()
{
	setlocale(LC_ALL, "rus");

	int a = 0;
	cout << a << endl;

	Foo(&a); // в функцию где ждут указатель, передаётся адрес памяти переменной
	cout << a << endl;

}

  