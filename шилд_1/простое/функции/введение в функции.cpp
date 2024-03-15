/*
Общая форма определения функции

тип-возврата имя(список-параметров)
{

    //тело функции

}

функция может возвращать любой тип, кроме массива

*/


//Пример 1
//создание функции


void myfunc(); // прототип функции

int main()
{
	setlocale(LC_ALL, "rus");
	
	cout << "В main()" << endl;

	myfunc(); // вызов myfunc()

	cout << "Снова в main()";

	return 0;
}

// Это определение функции

void myfunc()
{

	cout << "Внутри myfunc()" << endl;

}

// Пример 2 использование аргументов
/////////////////////////////////////////////
void box(int lenght, int width, int height); // прототип функции box()

int main()
{
	setlocale(LC_ALL, "rus");
	
	box(7, 20, 4);
	box(50, 3, 2);
	box(8, 6, 9);
	

	return 0;
}

void box(int lenght, int width, int height)
{

	cout << "объем коробки равне " << lenght * width * height << endl;
}

// использование предложения return

void power(int base, int exp);

int main()
{
	setlocale(LC_ALL, "rus");
	
	power(10, 2);
	power(10, -2);

	return 0;
}

//возведение целого числа в целую положительную степень.
void power(int base, int exp)
{

	int i;
	if (exp < 0) return; // отрицательные показатели мимо

	i = 1;
	for (; exp; exp--) i = base * i;
	cout << "Ответ: " << i;
}

//функция с возвращаемым значением
/*
return значение;

*/

int box(int length, int width, int height); // вернем объём

int main()
{
	setlocale(LC_ALL, "rus");
	
	int answer;

	answer = box(10, 11, 3);

	cout << "Объем равен " << answer;
	return 0;
}

//эта функция возвращает значение
int box(int length, int width, int height)
{

	return length * width * height;

}








