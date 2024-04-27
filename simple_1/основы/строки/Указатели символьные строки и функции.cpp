/*

	строки и указатели в C++


	строка в своем примитивном виде - это массив символов(char), которая заканчивается нуль терминатор
*/

#include <iostream>
using namespace std;


void foo(const char* str)
{

	cout << strlen(str) << endl;

}

void main()
{
	/*
	//указатель типа чар

	//1
	char str[] = "Hello";

	// 2 = 1
	const char* string = str; //"Hello!";

	cout << string << endl;
	*/


	/*
	//массив строк будет выглядеть как двумернный массив

	const	char* strArr[] = {"Hello", "World", "TEST"};

	for (int i = 0; i < 3; i++)
	{

		cout << strArr[i] << endl;

	}
	*/

	//передача стркои в функцию

	const char* str = "Hello";
	foo(str);


}





