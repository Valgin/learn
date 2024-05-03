/*

	строки и указатели в C++

*/

#include <iostream>
using namespace std;



int StrLenght(const char* str)
{
	
	int counter = 0;


	while (str[counter] != '\0')
	{

		counter++;

	}

	return counter;
}


void main()
{
	const char* str = "Hello";

	cout << StrLenght(str) << endl;

}





