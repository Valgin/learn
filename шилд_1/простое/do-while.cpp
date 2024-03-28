/*
Конструкия do-while

do{

    предложение
}while(условие);
*/

// в следующей программе цикл выполняется, пока пользователь
// не введет число 100

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int num;

    do{
        cout << "Введите число (100 для завершения): ";
        cin >> num;
    }while(num != 100);
    return 0;
}