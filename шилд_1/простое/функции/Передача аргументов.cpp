// Передача  функции указателей и массивов

//Передача указателя

void f(int* j); // f() 

int main()
{
	int i;
	//int* p;

	//p = &i;

	f(&i); // передача указателя

	cout << i;

	return 0;
}

// f() получает указатель на int
void f(int* j)
{
	*j = 100;
}

//Передача массива
/*
Когда в качестве аргумента выступает массив,
в функию передаётся не копия всего массива, а адрес первого элемента
*/

//пример 1


int main()
{
	int t[10], i;

	for (i = 0; i < 10; ++i) t[i] = i;

	display(t);//передача в функцию массива t

	return 0;

}

//выведем несколько чисел
void display(int num[10])
{
	int i;

	for (i = 0; i < 10; ++i) cout << num[i] << ' ';
}

//пример 2 (передача массива через указатель)
void cube(int *n, int num);

int main()
{
	int i, nums[10];

	for (i = 0; i < 10; ++i) nums[i] = i + 1;

	cout << "Исходно содержимое: ";
	for (i = 0; i < 10; i++) cout << nums[i] << ' ';
	cout << '\n';

	cube(nums, 10); // вычисление кубов

	cout << (nums, 10); // вычисление кубов

	cout << "Измененное содержимое: ";
	for (i = 0; i < 10; i++) cout << nums[i] << ' ';

	return 0;

}

//Возведение в куб элементов массива
void cube(int* n, int num)
{
	while (num)
	{
		*n = *n * *n * *n;
		num--;
		n++;
	}
}


// Передача строк
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void strInvertCase(char* str);


int main()
{
	setlocale(LC_ALL, "rus");

	char str[80];

	strcpy_s(str, "This Is A test");

	strInvertCase(str);

	cout << str; // вывод модифицироанной строки

	return 0;

}

// преобразование региста букв внутри строки
void strInvertCase(char* str)
{
	while (*str) {
		if (isupper(*str)) *str = tolower(*str);
		else if (islower(*str)) *str = toupper(*str);

		str++; // сместимся к следующему символу
	}


}
