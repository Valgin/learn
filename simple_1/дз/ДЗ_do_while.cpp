#include <iostream>

using namespace std;

/*
*  
*
* Программа находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе
* 
*
*/



 void main() {

	setlocale(LC_ALL, "ru");

	int sum = 0;

	int rangeBegin, rangeEnd;
	
	cout << "Введите начало диапазона: ";
	cin >> rangeBegin;

	cout << "Введите конец диапазона: ";
	cin >> rangeEnd;

	do
	{
		if (rangeBegin% 2 != 0 ) {

			sum += rangeBegin;
		}

		rangeBegin++;
	} while (rangeBegin < rangeEnd);


	cout << "Сумма все нечетных числео в указанном диапазоне = " << sum << endl ;
}