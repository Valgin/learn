#include <iostream>
#include <cstdlib>
using namespace std;


/*
	Проект 4.1

	Демонстрация пузырькового упорядочения.

	пузырьковое упорядочение - является простым для понимания

	Хотя этот метод не очень эффективен - фактические его нельзя использовать при
	работе с большими массивами, одна для упорядочения относительно коротких массивов
	он вполне годится

*/


void main()
{

	setlocale(LC_ALL, "rus");

	int nums[10];
	int a, b, t;
	int size;

	size = 10; // число упорядочиваемых элемнтов

	//дадим элементам массива случайные начальные значения
	for (t = 0; t < size; t++) nums[t] = rand();
	// выведем на экран исходный массив
		cout << "Исходный массив:\n  ";
	for(t = 0; t < size; t++) cout << nums[t] << ' ';
	

	cout << '\n';

	// Это пузырьковое упорядочение.
	for (a = 1; a<size; a++)
	
		for (b = size - 1; b >= a; b--){
			if (nums[b - 1] > nums[b]) { // если не в том порядке
				// элементы обмениваются местами
				t = nums[b - 1];
				nums[b - 1] = nums[b];
				nums[b] = t;
			}
		}
	
	//выведем упорядоченный массив
	cout << "\nУпорядоченный массив:\n  ";
	for(t=0; t<size; t++) cout << nums[t] << ' ';

	

	
}