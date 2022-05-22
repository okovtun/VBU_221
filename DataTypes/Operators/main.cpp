#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR	//Оператор присваивания (=)
//#define INCREMENT_DECREMENT		//(++/--)
//#define COMPOUND_ASSIGNMENTS	//Составные присваивания
#define COMPARISON_OPERATORS	//Операторы сравнения

void main()
{
	setlocale(LC_ALL, "");
	3;
	-3;	//Unary minus
	8 - 3;//Binary minus
	8 * 3;//Binary aster
	//*3; //Оператор умножения может быть только бинарным

#ifdef ARITHMETICAL_OPERATORS
			/*
--------------------------------
Unary:	+, -;
Binary:	+, -, *, /, %;
% - остаток от деления (modulo)
--------------------------------
*/
	cout << 17. / 3 << endl;
	cout << 17. % 3 << endl;
	cout << 3 / 17 << endl;
	cout << 3 % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//		l-value = r-value;
//int a = 2;
//a - l-value (переменная слева)
//2 - r-value (выражение справа)

//a = 2 + 3 * 4 / 5 + 8;
//a - l-value (переменная слева)
//2 + 3 * 4 / 5 + 8 - r-value (выражение справа)

//2 + 3 + 5 * 8 + 13 + 21

	int a, b, c;

	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//int i = 0;
//++i;	//Prefix incrment
//i++;	//Postfix increment
//--i;	//Prefix decrement
//i--;	//Postfix decrement

//int j = ++i;
//cout << i << endl;	//1
//cout << j << endl;	//1

	int i = 3;
	i = ++i + ++i;
	cout << i << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	unsigned short a = 2;
	short b = 3;
	cout << a << endl;
	cout << b << endl;
	//a = a + b;
	a += b;	//a=5
	cout << a << endl;
	//a -= b;	//a=2
	a *= b;
	a /= b;

	cout << a << endl;
#endif // COMPOUND_ASSIGNMENTS

	//cout << (!true == false) << endl;
	//cout << (!false == true) << endl;
	//cout << (true || false || false) << endl;

	cout << (!true && false && true) << endl;
}