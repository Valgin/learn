/* Массивы 

sizeof - возвращает длинну в байтах

*/





void main() {

    setlocale(LC_ALL, "rus");

    int arr[]{5,33,545,1111,66};

   /* int a = sizeof(arr);
    int b = sizeof(int);*/

 //   cout << sizeof(arr)/ sizeof(int) << endl;
   
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    
}