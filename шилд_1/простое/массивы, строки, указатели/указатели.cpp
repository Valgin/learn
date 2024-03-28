/*
указатели

Указатель - это объект, содержащий адрес памяти переменной.

*/

//пример передачи указателя
int main()
{

    setlocale(LC_ALL, "rus");

    int total;
    int* ptr;
    int val;

    total = 3200;

    ptr = &total; // получим адресс total

    val = *ptr; //получим значение по адресу

    cout << "total равно: " << val;

    return 0;

}

// базовый тип указателя имеет большое значение
//пример неправильной программы

int main()
{

    setlocale(LC_ALL, "rus");
    
    double x, y;
    int *p;

    x = 123.23;

    p = (int*) &x;// используем приведение типа для присваивания
                  // значение double * переменной типа int *

    y = *p;

    cout << y;

    return 0;

}

//Операции присваивания посредством указателя

int main()
{

	int *p, num;

	p = &num;
	
	*p = 100;

	cout << num << ' ';
	(*p)++;
	cout << num << ' ';
	(*p)--;
	cout << num << '\n';

	return 0;

}

// Сравнение двух указателей имеет смысл если они оба указывают
// на один и тот же объект, например массив


//Указатели и массивы

// Обращение регистра посредством индексации массива

#include <iostream>
#include <cctype>
using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");

	int i;
	char str[80] = "This Is A Test";

	cout << "Исходная строка: " << str << "\n";

	for (i = 0; str[i]; i++) {
		if (isupper(str[i])) // проверка на прописнуб буквы
			str[i] = tolower(str[i]);
		else if (islower(str[i]))// проверка на строчную
			str[i] = toupper(str[i]);
	}

	cout << "Преобразованная строка: " << str;

	return 0;

}

// Обращение регистра посредством арифметики указателей
int main()
{

	setlocale(LC_ALL, "rus");

	char* p;

	char str[80] = "This Is A Test";

	cout << "Исходная строка: " << str << "\n";

	p = str;//присвоим p адресс начала массива

	while (*p) {
		if (isupper(*p))
			*p = tolower(*p);
		else if (islower(*p))
			*p = toupper(*p);
		p++;

	}

	cout << " Преобразованная строка: " << str;


	return 0;

}

// Присвоение значения элементу массива через указатель 

*(nums+3) = 100;


//массивы указателей
// использование двумерного массива указателей

int main()
{

    setlocale(LC_ALL, "rus");
    
    const char* dictionary[][2] =
    {
    "карандаш", "Инструмент для рисования.",
    "клавиатура", "Устройство ввода.",
    "ружье", "Плечевое огнестрельное оружие.",
    "Самолет", "Воздушное судно с неподвижными крыльями,",
    "сеть", "Группа соединенных между собой компьютеров.",
    "",  "" 


    };

    char word[80];
    int i;

    cout << "Введите слово: ";
    cin >> word;

    for (i = 0; *dictionary[i][0]; i++) {
        if (!strcmp(dictionary[i][0], word))
            cout << dictionary[i][1] << "\n";
        break;

    }

    if (!*dictionary[i][0])
        cout << word << "не найдено.\n";

    return 0;

}

