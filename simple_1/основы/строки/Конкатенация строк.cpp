/*

	Что такое конкатенация строк?

	конкатенация - это объединения элемнтов в новый элемент

*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;


void main()
{

	char result[255]{};

	char str1[255] = "Hello";

	char str2[255] = "World";


	
	//конкатенация в C - стиле


	cout << str1 << endl;

	strcat(result, str1);
	strcat(result, str2);


	cout << str1 << endl;

	///////////////////

	
}





