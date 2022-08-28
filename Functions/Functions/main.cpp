#include<iostream>
using namespace std;

int Add(int a, int b = 0);	//Прототип функции - Объявление функции (Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;

	int c = Add(a);	//Использование функции - Вызов функции (Function call)

	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << b << " - " << a << " = " << Sub(b, a) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << b << " / " << a << " = " << Div(b, a) << endl;
}

int Add(int a, int b)	//Реализация функции - Определение функции (Function definition)
{
	//Addition
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication
	return a * b;
}
double Div(int a, int b)
{
	//Division
	return (double)a / b;
}

//Unresolved externals
//(LNK - Link)