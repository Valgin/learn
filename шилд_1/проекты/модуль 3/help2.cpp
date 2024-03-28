#include <iostream>

using namespace std;

/*
    Проект 3-2

    усовершенстование справочной системы

*/


int main() {

    setlocale(LC_ALL, "ru");

    char choice;

    do {
        cout << "Справка по :\n";
        cout << " 1. if\n";
        cout << " 2. switch\n";
        cout << " 3. for\n";
        cout << " 4. while\n";
        cout << " 5. do-while\n";
        cout << "Выберите один из пунктов: ";

        cin >> choice;
        
        if (choice < '1' || choice > '5') {
            cout << "такого пункта нет " << endl;
        }

    } while (choice < '1' || choice > '5');

    cout << "\n";

    switch (choice) {
    case '1':
        cout << "Предложение if:\n\n";
        cout << "if(условие) предложение;\n";
        cout << "else предложение;\n";
        break;
    case '2':
        cout << "Предложение switch:\n\n";
        cout << "switch(выражение) {\n";
        cout << "	case константа:\n";
        cout << "	последовательность предложений\n";
        cout << "	break;\n";
        cout << " // ...\n";
        cout << "}\n";
        break;
    case '3':
        cout << "Цикл for: \n\n";
        cout << "for(инициализация; условие; приращение)";
        cout << " предложение;\n";
        break;
    case '4':
        cout << "Цикл while:\n\n";
        cout << "while(условие) предложение;\n";
        break;
    case '5':
            cout << "Цикл do-while:\n\n";
            cout << "do {\n";
            cout << " предложение;\n";
            cout << "} while(условие);\n";
            break;
    }

    return 0;
}