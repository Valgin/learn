#include <iostream>


using namespace std;




int main() {

	setlocale(LC_ALL, "ru");

	int a, b, c;

	a = 2;
	b = 3;

	// тут увидим, потому что условие истинно 
	if (a < b) cout << "a менбше чем b\n";

	// тут ничего не увидим потому что условие ложно
	if (a == b) cout << "это вы не увидите\n";
	
	//вывод пустой строки 
	cout << "\n";

	c = a - b;

	cout << "c содержит -1\n";
	if (c >= 0) cout << "с неотрицательно\n";
	if (c < 0) cout << "c отрицательно\n";

	cout << "\n";

	c = b - a;
	cout << "c содержит 1\n";
	if (c >= 0) cout << "c неотрицательно\n";
	if (c < 0) cout << "c отрицательно\n";

	return 0;
}