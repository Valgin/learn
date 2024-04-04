
/*	

	Работа с динамической памятью. Операторы выделения памяти new и detete.

	выделяема память находится вне рамках программы

	Если выделаю память с new, то после использования пишу delete
*/


#include <iostream>
using namespace std;

void main()
{

	int* pa = new int; // выделяем область динамической памяти
	*pa = 10;

	cout << *pa << endl;

	delete pa;

}

  