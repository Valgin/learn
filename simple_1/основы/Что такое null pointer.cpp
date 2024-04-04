
/*	

	Работа с динамической памятью. Null и nullptr

	как исправить такую проблему, что удаляем испольуемю память, а указатель
	на этот участок остался

	нужно использовать указать на NULL
*/


#include <iostream>
using namespace std;

void main()
{

	int* pa = new int; // выделяем область динамической памяти
	*pa = 10; 
	cout << *pa << endl;
	delete pa;

	pa = nullptr; // можно использовать nullptr - это отдельный тип данных

	if(pa != nullptr)
	{
		cout << pa << endl;
	}
	delete pa;

}

  