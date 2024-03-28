#include <iostream>

using namespace std;

/*

Напишите программу, которая находит все простые числа в диапазоне от 1 до 100


*/



int main() {

	setlocale(LC_ALL, "ru");

	bool signal;
	
	for (int i = 1; i < 100; i++) {

		signal = true;

		for (int j = 2; j <= i / 2; j++) {
			if ((i%j) == 0) {
				signal = false;
			}
		}

		if (signal) {
			cout << i << " простое" << endl;
		}
	}

	return 0;
}