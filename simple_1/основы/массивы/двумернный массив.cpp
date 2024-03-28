#include <iostream>

using namespace std;

/*

двумерный массив 

инииализаия

*/

void main() {

    setlocale(LC_ALL, "rus");


    //const int ROW = 3;
    const int COL = 4;

    int arr[][COL] // обязательно ужно указывать количество колонок
    {
        {2, 5, 66,1},
        {4344,3,6,1},
        {222, 232,1,11},
        {3213,4214,555,234}

    };

}

/*

вывод заполнение

*/


void main() {

    setlocale(LC_ALL, "rus");

    const int ROWS = 5;

    const int COLS = 8;
   

    int arr[ROWS][COLS];


    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++) 
        {
            arr[i][j] = rand() % 10;
        }
    }


    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}