#include <iostream>


using namespace std;

/*

  Функция 
  
  возвращаемое_значение имя_функции (параметры)
  {
  блок_повторяющегося_кода (тело);
  }


*/


void foo()
{

    cout << "Я функция, меня вызвали!" << endl;
    return;
}


int Sum(int a, int b)
{

  
    return a + b ;
}

double Sum_2(double a, double b, double c)
{

    return a + b + c;

}


void main() {

    setlocale(LC_ALL, "ru");

    int a = 5.0, b = 3.0, c = 7.0;

    cout << Sum(a, b) << endl;

    cout << Sum_2(a, b, c) << endl;

   
}

