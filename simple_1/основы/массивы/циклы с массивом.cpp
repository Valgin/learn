/* Массивы 

циклы с массивом


*/



//инициализация массива
void main() {

       setlocale(LC_ALL, "ru");

    /*
    размер массива через константу 
    позволяет удобнее обращаться к элементам массива
    
    */
    const int size = 5;

    int arr[size]{55,30,2,123,96};
    //цикл для вывода элемнто массива
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

}



//цикл для заполнения массива
void main() {

    setlocale(LC_ALL, "rus");

    const int size = 5;

    int arr[size]{};

    for (int i = 0; i < size; i++ ) 
    {
        arr[i] = i;

    }

    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << endl;
    }
   

}