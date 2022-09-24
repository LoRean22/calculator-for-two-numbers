#include <iostream>

using namespace std;

class Calculator
{
private:
    double num1;
    double num2;

public:
    double add(double num1, double num2)
    {
        return num1 + num2;
    }

    double multiply(double num1, double num2)
    {
        return num1 * num2;
    }

    double subtract_1_2(double num1, double num2)
    {
        return num1 - num2;
    }

    double subtract_2_1(double num1, double num2)
    {
        return num2 - num1;
    }

    double divide_1_2(double num1, double num2)
    {
        return num1 / num2;
    }

    double divide_2_1(double num1, double num2)
    {
        return num2 / num1;
    }

    bool set_num1(double number1) 
    {
        if (number1 != 0) {
            num1 = number1;
            return true;
        }

        else 
        {
            return false;
        }

        bool set_num2(double number2) 
        {
            if (number2 != 0) {
                num2 = number2;
                //либо this->num2=num2;
                return true;
            }

            else 
            {
                return false;
            }
        }
};

int main()
{
    setlocale(LC_ALL, "Russian");


    int num1;
    int num2;


    do
    {
        cout << "Введите num1: ";
        cin >> num1;

        if (num1 == 0)
        {
            cout << "Неверный ввод(Повторите '0' если хотите выйти из программы)!" << "\n" <<
                "Введите num1: ";
            cin >> num1;

            if (num1 == 0)
            {
                cout << "Работа завершена!" << "\n";
                return 1;
            }
        }

        cout << "Введите num2: ";
        cin >> num2;

        if (num2 == 0)
        {
            cout << "Неверный ввод(Повторите '0' если хотите выйти из программы)!" << "\n" <<
                "Введите num2: ";
            cin >> num2;

            if (num2 == 0)
            {
                cout << "Работа завершена!" << "\n";
                return 2;
            }
        }

        Calculator method_1;

        method_1.set_num1(num1);
        method_1.set_num2(num2);

        cout << "num1 + num2 = " << method_1.add(num1, num2) << "\n";

        cout << "num1 - num2 = " << method_1.subtract_1_2(num1, num2) << "\n";
        cout << "num2 - num1 = " << method_1.subtract_2_1(num1, num2) << "\n";

        cout << "num1 * num2 = " << method_1.multiply(num1, num2) << "\n";

        cout << "num1 / num2 = " << method_1.divide_1_2(num1, num2) << "\n";
        cout << "num2 / num1 = " << method_1.divide_2_1(num1, num2) << "\n";
    } while (num1);
}