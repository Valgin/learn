/*

	ссылка - это переменная, которая хранит в себе адрес где лежит переменная 

	сслыки схожи с указателем


	у ссылок нет оператора разыменования, они и без него работают со значением
*/


#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");

	// использование указателя
	int a = 5;

	int *pa = &a;
	///////////////

	//использование ссылки

	int& aref = a;

	/*
	cout << "*pa\t" << pa << endl;
	pa++; // двинулся на 4 байта
	cout << "*pa\t" << pa << endl;
	*/

	cout << "a\t" << a << endl;

	cout << "&aref\t" << aref << endl;

	aref = 55;

	cout << "a\t" << a << endl;


	//ссылки нужно инициализировать


}



//пример 2


void main()
{

	int a = 5;

	int *pa = &a;

	int& aref = *pa;

	int* ppa = &aref;


	cout << "a\t" << a << endl;
	*ppa = 12;

	cout << "a\t" << a << endl;



}



