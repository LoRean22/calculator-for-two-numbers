#include <iostream>

using namespace std;

class Calculator 
{
private:
	double num1;
	double num2;

public:
	double add() 
{
		double result = num1 + num2;

		return result;
	}
	double multiply() 
{
		double result = num1 * num2;

		return result;
	}
	double subtract_1_2() 
{
		double result = num1 - num2;

		return result;
	}
	double subtract_2_1() 
{
		double result = num2 - num1;

		return result;
	}
	double divide_1_2() 
{
		double result = num1 / num2;

		return result;
	}
	double divide_2_1() 
{
		double result = num2 / num1;

		return result;
	}
	bool set_num1(double number1) {
		if (number1 != 0) 
    {
			num1 = number1;
			return true;
		}
		else {
			return false;
		}
	}
	bool set_num2(double number2) 
  {
		if (number2 != 0) 
    {
			num2 = number2;
			return true;
		}
		else {
			return false;
		}
	}
};

int main() 
{
	setlocale(LC_ALL, "Russian");

	Calculator calc;
	double num1;
	double num2;

	while (true) 
  {
		do {
			cout << "Введите num1: ";
			cin >> num1;
			if(calc.set_num1(num1)) 
      {
				break;
			}
			else 
      {
				cout << "Неверный ввод!" << endl;
			}
		} while (true);

		do 
    {
			cout << "Введите num2: ";
			cin >> num2;
			if(calc.set_num2(num2)) {
				break;
			}
			else 
      {
				cout << "Неверный ввод!" << endl;
			}
		} while (true);

		cout << "num1 + num2 = " << calc.add() << endl;

		cout << "num1 - num2 = " << calc.subtract_1_2() << endl;

		cout << "num2 - num1 = " << calc.subtract_2_1() << endl;

		cout << "num1 * num2 = " << calc.multiply() << endl;

		cout << "num1 / num2 = " << calc.divide_1_2() << endl;

		cout << "num2 / num1 = " << calc.divide_2_1() << endl;
	}

	return 0;
}
