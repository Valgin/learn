#include <iostream>


using namespace std;

/*

  Функция 
  
  передача массива в функцию

  массив не передётся по значению
*/


void FillArray(int arr[], const int size)
{

    for (int i = 0; i < size; i++ )
    {
        arr[i] = rand() % 10;

    }

}


void PrintArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;

    }

}


void main() {

    setlocale(LC_ALL, "ru");

    const int SIZE = 10;

    int arr[SIZE];
   

    FillArray(arr, SIZE);
    PrintArray(arr,SIZE);
}

