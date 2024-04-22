/*
	изменить размер массива
	добавить элемент в массив
	удалить элемент массива

	1.чтобы изменить размер массива, мы должы создать новый массив с нужным кол-вом ячеек и удалить изначальный массив

	2. чтобы удалить элемент, нужен новый массив с новыми ячейками


	// ПОДУМАТЬ КАК ДОБАВИТЬ В НАЧАЛО И ВО ВТОРОЙ ЭЛЕМЕНТ МАССИВА
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

// реализация функции добавления как в  STL
// c помощью указателя на ссылку(*&arr), можно подменить адрес памяти на который он указывает
//мы передадим адрес указателя который указывает на динамический массив
void push_back(int*& arr, int& size, const int value)
{

	int* newArrey = new int[size + 1];

	for (int i = 0; i < size; i++)
	{

		newArrey[i] = arr[i];

	}
	newArrey[size] = value;
	
	size++;

	delete[] arr;

	arr = newArrey;
}



void pop_back(int*& arr, int& size)
{
	size--;

	int* newArrey = new int[size];

	for (int i = 0; i < size; i++)
	{

		newArrey[i] = arr[i];

	}


	delete[] arr;// удаляем массив

	arr = newArrey;// присваим указателю другой массив

}

void main()
{
	int size = 5;
	int* arr = new int[size];

	FillArray(arr, size);
	ShowArray(arr, size);

	push_back(arr, size, 111);

	ShowArray(arr, size);

	pop_back(arr, size);
	ShowArray(arr, size);
	
	delete[] arr;

}




