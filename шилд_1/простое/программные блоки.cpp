#include <iostream>


using namespace std;

/*
*			Демонстрация программного блока
* 

*/



int main() {

	
	double result, n, d;

	cout << "Введите значение: ";
	cin >> n;

	cout << "Введите делитель: ";
	cin >> d;

	//целевым объектом предложения if является блок

	if (d != 0) {

		cout << "d не равно нулю, поэтому делить можно";
		result = n / d;
		cout << n << " / " << d << " равно" << result;
	}

	return 0;
}