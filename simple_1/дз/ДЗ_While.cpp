#include <iostream>

using namespace std;

/*
*  
*
* учимся циклу while
* 
*
*/



 int main() {

	setlocale(LC_ALL, "ru");

	char a;
	int line;
	int counter;

	cout << "Введите символ для линии: ";
	cin >> a ;

	cout << "Введите количество символов: ";
	cin >> counter;

	cout << "выберите расположение линии: ";
	cin >> line;

	for (int i = 1; i < counter; i++) {

		if (line == 1)
			cout << a;

		if (line == 2)
			cout << a << endl;
	}

	return 0;
}