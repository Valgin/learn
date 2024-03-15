// Проект 4-2 (перенести в другую папку)
// Переворачивание строки
#include <iostream>
#include <cstring>
using namespace std;


int main()
{

	setlocale(LC_ALL, "rus");

	char str[] = "это проверка работы программы";
	char* start; //, end;
	char* end;
	int len;
	char t;

	cout << "Исходная: " << str << "\n";

	len = strlen(str);

	start = str;
	end = &str[len - 1];

	while (start < end)
	// обмениваем символы
	{
		t = *start;
		*start = *end;
		*end = t;

		//продвинем указатели
		start++;
		end--;
	}

	cout << "Перевернутая: " << str << "\n";

	return 0;
}