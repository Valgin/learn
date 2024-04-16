/*

Динамический массив

Компилятор не контролирует выход за пределы массива

Динамическая память = куча

шаги в байтах
*/


#include <iostream>
using namespace std;

void main()
{

	int size = 0;

	cout << "enter array size" << endl;
	cin >> size;

	int* arr = new int[size];


	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}


	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t"; //  операция индексации

		cout << arr + i << endl; // арифметика указателей
	}
	
	delete[] arr;

}




