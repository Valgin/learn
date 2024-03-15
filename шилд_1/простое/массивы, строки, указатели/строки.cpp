#include <iostream>


using namespace std;

/*

строки

char str[11];

использование функции gets()

*/

int main() {

    setlocale(LC_ALL, "rus");

    char str[80];

    cout << "Вводите строку: ";
    //cin >> str;
    cin.getline(str, 80);// ввод строки с клавиатуры и позволяет записывать пробелы
    cout << "Вот ваша строка: ";
    cout << str;

    return 0;
}