/* Рекурсия*/

/*
Рекурсия она же циклическое определение, представляет собой процесс определения
чего-то с помощью самого себя.

*/


/*
демонстрация рекурсии
*/

#include <iostream>
using namespace std;

int factr(int n);
int fact(int n);


int main()
{
	setlocale(LC_ALL, "rus");

	// используем рекурсивный вариант
	cout << "4 факториал равен " << factr(4);
	cout << '\n';

	// используем итеративный вариант

	cout << "4 факториал равен " << fact(4);
	cout << '\n';
	
	return 0;

}

// рекурсивный вариант
int factr(int n)
{

	int answer;

	if (n == 1) return(1);
	answer = factr(n - 1) * n;
	return(answer);

}

// итеративный вариант
int fact(int n)
{
	int t, answer;

	answer = 1;

	for (t = 1; t <= n; t++) answer = answer * (t);
	return(answer);

}
