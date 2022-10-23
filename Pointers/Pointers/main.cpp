#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");

#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//Вывод значения переменной 'a' на экран
	cout << &a << endl;	//Взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;	//Вывод на экран адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//Разыменование указателя 'pa' и получение значения по адресу

	int* pb;
	int b = 3;
	pb = &b;

	//int - int
	//int* - Указатель на int
	//double - double
	//double* - Указатель на double  
#endif // POINTERS_BASICS

	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}

/*
--------------------------------------------
& - Оператор взятия адреса (Address-of operator)
* - Оператор разыменования (Dereference operator)
--------------------------------------------
*/
/*
--------------------------------------------
+
-
++
--
char	- 1 Byte
short	- 2 Byte
int		- 4 Byte
.....
.....
--------------------------------------------
*/