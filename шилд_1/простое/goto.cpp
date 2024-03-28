/*

оператор GOTO совершает безулсовный переход


Когда это 
предложение встречается в программе, управление передается в заданную в нем точку


В предложении goto требуется указание метки. 
Метка — это допустимый идентификатор С++ , сопровождаемый двоеточием.
Метка должна находиться в той же функции, что и использующее ее goto.
 
Например, цикл от 1 до 100 можно организовать с помощью goto и метки:

*/

/* пример GOTO выход из цикла

for(...) {
    for(...) {
        while(...) {
            if(...) goto stop;
            .
            .
            .
        }
    }
stop:
    cout << "Ошибка в программе.\n";


}



*/



#include <iostream>
using namespace std;

//пример 1

int main()
{

    int x = 1;
    loop1:
        cout << "vvvv";
    if(x == 1) goto loop1;

    return 0;

}