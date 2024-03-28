#include <iostream>

using namespace std;

/*

 \b Удаление последнего выведеннгого символа
 \n Перейти на начало новой строки
 \t перейти к следующей позиции табуляции
  
//////////////////////////////////////////
 

 \\ Вывести обратную черту \
 \"Вывести двойную кавычку "
 \' Вывести одинарную кавычку '
*/



#include <iostream>
using namespace std;

//пример 1

int main()
{

	setlocale(LC_ALL, "ru");
	
	char letter;

	int num = 0;

	do 
	{
		cin >> letter;

		if (letter >= 'a' && letter <= 'z') {

			letter -= (char)32;
			num++;
			cout << letter;
		}
		else if (letter >= 'A' && letter <= 'Z') {

			letter += (char)32;
			num++;
			cout << letter;

		}

	} while (letter != '.');

	cout << "\nИзменения регистра: " << num << endl;
	
	return 0;

}