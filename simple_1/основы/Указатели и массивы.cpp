
/*Указатели и массивы. Арифметика указателей*/


/*

имя массива - это его указатель на первый элемент

из этого следует что int *pArr = arr;


(pArr+i) - получим адреса памяти, где хранятся данные
*(pArr+i) - получим значения этих ячеек

*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	const int SIZE = 5;

	int arr[SIZE]{4, 55, 79,1 ,4};

	for (int i = 0; i < SIZE; i++)
	{

		cout << arr[i] << endl;
	}

	cout << "====================================" << endl;

	int* pArr = arr;

	//проверка адреса памаяти

	cout << "arr\t" << arr << endl;
	cout << "pArr\t" << pArr << endl;

	cout << "====================================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		//эквиваленто записи
		//*(pArr+i)
		cout << pArr[i] << endl;
	}


}

  