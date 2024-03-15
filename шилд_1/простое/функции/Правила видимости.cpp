/*
Глобальная область видимости


*/

// пример с глобальной переменной
void func1();
void func2();

int countt;// Это глобальная переменная


int main()
{

    setlocale(LC_ALL, "rus");
    
    int i; // Это локальная переменная

    for (i = 0; i < 10; i++)
    {
        countt = i * 2;
        func1();
    }
    

    return 0;

}

void func1()
{
    cout << "count: " << countt;

    cout << '\n';

    func2();
}

void func2()
{
    int count;

    for (count = 0; count < 3; count++) cout << '.';


}

