/*

Двумерный динамический массив c++ пример. Создание, заполнение, удаление.

вообще двумерный массив - это одномерный массив массивов


 **arr две звездочки значит, что это указатель на указатель

*/


#include <iostream>
using namespace std;

void main()
{


	//объявление и создание массива
	int rows;
	int cols;

	cout << "enter rows count" << endl;
	cin >> rows;

	cout << "enter columns count" << endl;
	cin >> cols;


	int** arr = new int* [rows]; // запись означает, что мы создаем массив указателей

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];

	}


	///////////////////////////////
	//заполнение
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}

	///////////////////////////////
	//вывод массива
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout <<	arr[i][j] << "\t";
		}
		cout << endl;
	}

	
	///////////////////////////////
	for (int i = 0; i < rows; i++)
	{

		delete[] arr[i];
	}


	delete[] arr;

}




