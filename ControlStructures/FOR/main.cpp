#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FACTORIAL
//#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;	//количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL
	int n;	//Число, вводимое с клавиатуры
	cout << "Введите число: "; cin >> n;
	double f = 1;	//Factorial
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//Основание степени
	int n;		//Показатель степени
	double N = 1;	//Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		n = -n;
		a = 1 / a;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		//(char)i - явное преобразование переменной 'i' в тип данных 'char'
	}
#endif // ASCII

	int n = 10;
	for (int i = 1; i <= n; i++)//i-й for
	{
		for (int j = 1; j <= n; j++)	//j-й for
		{
			//cout << i << " * " << j << " = " << i*j << endl;
			cout << i * j << "\t";
		}
		cout << endl;
	}
}