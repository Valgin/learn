/* Шаблоны функий*/

/*
template typename

template class

Шаблонной функии  все равно с каким типом данных работать,
она подхватывает тип на ходу

нельзя передавать значения разных типов

*/

//template typename
#include <iostream>
using namespace std;


template <typename T1, typename T2> // прстая форма
void Sum(T1 a, T2 b)
{

	cout << a << endl;
	cout << b << endl;

}

void main()
{
	setlocale(LC_ALL, "rus");
	
	 Sum(2, 3.5);
}


// template class
template <class T> // ключевое слово class не отличается от typename 
void Sum(T a)
{

	cout << a << endl;

}

void main()
{
	setlocale(LC_ALL, "rus");
	
	Sum(2);

}

