#include <iostream>

using namespace std;

/*
*  
*
* Программа выводит на экран таблицу преобразования футов в метры
* 
*
*/


 int main() {

	setlocale(LC_ALL, "ru");

	double f;
	double m;

	int counter = 0;

	for (f = 1.0; f <= 100.0; f++) {
		
		m = f / 3.28;
		cout << f << " футов составляет " << m << " метров." << endl;

		counter++;

		if (counter == 10) {
			cout << "\n";
			counter = 0;
		}
	}

	return 0;
}