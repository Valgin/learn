#include <iostream>

using namespace std;

/*
*  
* Цикл do while 
*
* 
* do while сначала выполняется выражение, а потом идет происходит првоерка на истенность
* 
* один раз, но выполнится
* 
* 
* Где может использоваться? 
* 
* 
* 
*/



void main() {

	setlocale(LC_ALL, "ru");

	int a = 0;

	do
	{
	
		cout << "Переменная a = " << a << endl;
		a++;

	} while (a < 20);

	

}