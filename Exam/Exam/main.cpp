#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
	int number = 2583;
	do
	{
		cout << number % 10 << "\t";
	} while (number /= 10);

	cout << typeid(3.14f).name() << endl;
	//https://cplusplus.com/doc/tutorial/constants/
}