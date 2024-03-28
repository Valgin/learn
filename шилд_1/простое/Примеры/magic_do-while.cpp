/*
Программа "Магическое число": 3 -е усовершенствование

демонстрация do-while

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int magic; // магическое число
    int guess; // догадка пользователя

    magic = rand(); // получим  случайное число

    do {
        cout << magic << endl;
        cout << "Введите вашу догадку: ";
        cin >> guess;
        if (guess == magic) {
            cout << "** Правильно ** ";
            cout << magic << " и есть магическое число.\n";
        }
        else {
            cout << "...Жали, но вы ошиблись.";
            if (guess > magic)
                cout << " Ваше число слишком велико.\n";
            else
                cout << " Ваше число слишком мало.\n";
        }

    } while (guess != magic);

   
    return 0;
}