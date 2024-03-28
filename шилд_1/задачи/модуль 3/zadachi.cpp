#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "ru");

	char choice;
	int num = 0;

	cout << "Введите $ для завершения\n\n";
	do {
		
		cin >> choice;
		if (choice == '.') {
			num++;
	}
	} while (choice != '$');

	cout << "Точки: " << num << endl;
	return 0;

}


// СМЕНА РЕГИСТРА