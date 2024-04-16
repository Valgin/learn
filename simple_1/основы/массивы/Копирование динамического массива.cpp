/*

  как скопировать динамический массив C++

  Проблема копирования динамических массивов:
  1. утечка памяти
  нужно удалить данные для массива из которого копируем, потом нужно выделить новое место в памяти
*/

#include <iostream>
using namespace std;


void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}


void ShowArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void main()
{

	int size = 10;
	int* firstArray = new int[size];
	int *secondArray = new int[size];

	FillArray(firstArray, size);
	FillArray(secondArray, size);

	ShowArray(firstArray, size);
	ShowArray(secondArray, size);




	delete[] secondArray;
	delete[] firstArray;

}




