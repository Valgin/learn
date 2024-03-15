  /*
  
  функции могут возвращать указатели
  
  */

  /*
  Пример 1. Возврат указателя
  функция get_substr() просматривает строку в поисках заданной подстроки
  
  */

  #include <iostream>

using namespace std;

char *get_substr(char* sub, char *str);

int main()
{
	setlocale(LC_ALL, "rus");

	 char* substr;

	substr = get_substr("три", "один два три четыре");

	cout << "подстрока найдена: " << substr;

	return 0;

}


//возвращает указатель на подстроку или нулевой указатель
//если подстока не найдена


char* get_substr(char* sub, char* str)
{
	
	int t;
	char* p, * p2, * start;

	for (t = 0; str[t]; t++) {
		p = &str[t]; // начальная установка указателя
		start = p;
		p2 = sub;
		while (*p2 && *p2 == *p) {
			p++;
			p2++;
		}


		if (!*p2)
			return start; // вернуть указатель на начало подстроки

		
	}

	return 0; // подстрока не найдена 


}
