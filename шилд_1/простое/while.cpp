/*
Цикл while

Общая форма цикла while 

while(выражение) предложение;


*/



/*

Эта программа выводит все отображаемые на экране симолы,
включая расширенный символьный набор, если он существует

*/

#include <iostream>

using namespace std;


// 1 пример
int main() {

    unsigned char ch;

    ch = 32;

    while(ch) {
        cout << ch;
        ch++;
    }


	return 0;
}



// 2 пример 

#include <iostream>

using namespace std;

int main() {


    setlocale(LC_ALL, "ru");

    int len;

    cout << "Введите длину ( от 1 до 79): ";
    cin >> len;
    while (len > 0 && len < 80) {
        cout << '.';
        len--;
    }

    return 0;
}

