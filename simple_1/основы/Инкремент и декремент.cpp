#include <iostream>

using namespace std;

//Инкремент и декремент

// Префиксная и постфиксная 

void main() {

	setlocale(LC_ALL, "ru");

	int a = 1, b;
	
	b = ++a * a;

	cout << b << endl;

	cout << a << endl;

	
	a++; //инкремент постфиксная запись увеличивается на 1

	
	++a; // префиксная запись, операция имеет наивысший приоритет

}