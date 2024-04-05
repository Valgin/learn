/*

Динамический массив

Динамическая память = куча

шаги в байтах
*/


#include <iostream>
using namespace std;

void main()
{

	// объявление динамического массива
	int size = 5;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 ;
	}

	for (int i = 0; i < size; i++)
	{

		cout << arr[i] << "\t"; //  операция индексации
		cout << arr + i << endl; // арифметика указателей

	}


	delete [] arr;


}




