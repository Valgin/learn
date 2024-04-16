/*

  как скопировать динамический массив C++

  константные аргументы функции

*/


#include <iostream>
using namespace std;

// при передачи параметров в функцию они становятся константами
// нужны для того, не выделять память

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

	

}




