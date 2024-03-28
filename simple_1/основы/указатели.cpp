
/*указатели*/



#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int a = 5;

	cout << "a\t" << a << endl;

	int *px = &a; // & - оператор взятия адреса

	/*
	cout << px << endl;
	
	cout << *px << endl; //  разыменование указателя
	*/

	int* px2 = &a;

	cout << "px\t" << px << endl;

	cout << "px2\t" << px2 << endl;

	*px2 = 2;

	cout << "a\t" << a << endl;
}

  