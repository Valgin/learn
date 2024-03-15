#include <iostream>

using namespace std;

/*Вложенные циклы

пример использования
Сортировка массива

*/

void main() {

    setlocale(LC_ALL, "rus");

    int width, height;

    cout << "Введите высоту прямоугольника: ";
    cin >> height;

    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    for (int j = 0; j < height; j++)
    {
        
        for (int i = 0; i < width; i++)
        {

            cout << "*";
        }

        cout << "\n";
    }

    
    cout << "\n";
}