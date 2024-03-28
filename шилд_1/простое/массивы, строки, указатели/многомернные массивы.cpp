#include <iostream>

using namespace std;


/*
	многомернный массив - массив с числом измерений 
	больше двух

	редко используются из-за большого потребления памяти

	тип имя[размер1][размер2]...[размерN];

	int multidim[4][10][3];


*/


// заполнение многомерного массива

void main()
{

	int arr[4][10][3];

	int value = 1;


	for (int i =0; i < 4; i++ )
	{
		for (int j = 0; j < 10; j++)
		{
			for (int t = 0; t < 3; t++)
			{
				arr[i][j][t] = value;
				value++;
			}
		}
	}

	// вывод массив

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int t = 0; t < 3; t++)
			{
				cout << arr[i][j][t] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	

	
}