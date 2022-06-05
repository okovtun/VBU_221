#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TARGET
//#define CALC_1
//#define CALC_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef TARGET
	double number;	//Число, вводимое с клавиатуры
	cout << "Введите число: "; cin >> number;
	if (number > 0 && number < 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif // TARGET

#ifdef CALC_1
	double a, b;	//Числа, вводимые с клавиатуры
	char s;	//Sign - знак операции
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		//cout << std::setprecision(2) << fixed;
		cout << a << " / " << b << " = " << a / b << endl;
	}
#endif // CALC_1

#ifdef CALC_2
	double a, b;
	char s;
	do
	{
		cout << "Введите арифметическое выражение: ";
		cin >> a >> s >> b;
		//cout << a << s << b << endl;
		switch (s)
		{
		case '+':cout << a << " + " << b << " = " << a + b << endl; break;
		case '-':cout << a << " - " << b << " = " << a - b << endl; break;
		case '*':cout << a << " * " << b << " = " << a * b << endl; break;
		case '/':cout << a << " / " << b << " = " << a / b << endl; break;
		default: cout << "Error: No operation" << endl;
		}
		cout << "Для выхода надмите Esc, для продолжения надмите любую клавишу" << endl;
	} while (_getch() != 27);
#endif // CALC_2

	int number;	//Число, вводимое с клавиатуры
	int reverse = 0;//Число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number;	//Эта перемнная хранит копию числа, введенного с клавиатуры
	//Копия нужна для того, чтобы введенные данные остались неизменными.
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
}