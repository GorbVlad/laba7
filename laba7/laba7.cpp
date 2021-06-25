#include <iostream>

using namespace std;

double zad1(double a, double b) 
{
    double c;
    c = 2 / (1 / a + 1 / b);
    return c;
}
void zad2(double& x, double& y, double& z) //передача по ссылке(адресу);
    {
        double a, b, c; // максимум, минимум, среднее
        b = x;
        if (y < b)
            b = y;//поиск минимума;
        if (z < b)
            b = z;
        a = x;
        if (y > a)
            a = y; //поиск максимума;
        if (z > a)
            a = z;
        if (x != b && x != a)
            c = x;
        if (y != b && y != a) //поиск среднего;
            c = y;
        if (z != b && z != a)
            c = z;
        x = b;
        y = c;
        z = a;
    }

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "*********************" << endl;
    cout << "Задание 1" << endl;
    cout << "*********************" << endl;
    double a, b;
    cout << "Введите числа:" << endl;
    do {
        cout << "Число a -";
        cin >> a;
        cout << endl;
        cout << "Число b -";
        cin >> b;
        cout << endl;
        if (a == 0 || b == 0)
            cout << "Ошибка:";//проверка ввода деления на 0 (нельзя);
    } while (a == 0 || b == 0); cout << endl;
    cout << "Среднее гармоническое - " << zad1(a, b) << endl;
    cout << endl;
    cout << endl;
    cout << "*********************" << endl;
    cout << "Задание 2" << endl;
    cout << "*********************" << endl;
    double a1, a2, a3;
    cout << "Введите числа:" << endl;
    cout << "a1 - ";
    cin >> a1;
    cout << endl;
    cout << "a2 - ";
    cin >> a2;
    cout << endl;
    cout << "a3 - ";
    cin >> a3;
    cout << endl;
    zad2(a1, a2, a3);
    cout << a1 << "-" << a2 << "-" << a3 << endl;
    system("pause");
    return 0;
}

