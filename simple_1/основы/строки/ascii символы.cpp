/*
	таблица символов ASCII

	1 байт = 8 бит 

	0 до 255
*/

#include <iostream>
using namespace std;



void main()
{

	//cout << sizeof(char) << endl;

	setlocale(LC_ALL, "ru");

	for(int i = 0; i <= 255; i++)
	{ 
	
		cout << "code = " << i << "\t" << " char = " << (char)i << endl;
	
	}

}





