#include <iostream>
#include <cstdlib>

using namespace std;

double Deleniye(double x1, double x2)
{
    
    return x1/x2;
}

double Umn(double x1, double x2)
{
    
    return x1*x2;
}

double Plus(double x1, double x2)
{
    
    return x1+x2;
}

double Minus(double x1, double x2)
{
    
    return x1-x2;
}

double Proc(double x1, double x2)
{
    
    return x1/x2*100;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x1=0;
    double x2=0;
    double itog=0;
    char znak;
    
    cout << "введи число: " << endl;
    cin >> x1;
    
    cout << "введи операцию (+, -, *, /, %): ";
    cin >> znak;
    
    cout << "введи второе число: " << endl;
    cin >> x2;
    
    if (znak== '+')
    {
        Plus(x1, x2);
    }
    else if (znak == '-')
    {
        Minus(x1, x2);
    }
    else if (znak == '*')
    {
        Umn(x1, x2);
    }
    else if (znak == '/')
    {
        if (x2 != 0)
        {
            Deleniye(x1, x2);
        }
        else
        {
            cout << "ошибка: Деление на ноль!" << endl;
        }
    }
    else if (znak == '%')
    {
        Proc(x1, x2);
    }
    else
    {
        cout << "ввыбрана не верная операция" << endl;
    }
    
    return 0;
}
