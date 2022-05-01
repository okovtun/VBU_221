#include<iostream>
using namespace std;

#define offset	"\t\t\t\t\t"	//offset - ��� �������, "\t\t\t\t\t" - �������� �������
#define newline "\n"	//newline - ��� �������, "\n" - �������� �������
//#define (����������) ������� ���������������� (������)
//��������� #define ��������� ����������� ��� �������� ��� ��������

//#define ESCAPE_SEQUENCES

void main()	//��� ������� �������
{
	setlocale(LC_ALL, "Russian");
#if defined ESCAPE_SEQUENCES
//���� ���������� ESCAPE_SEQUENCES, 
//�� ������������� ��� ����� ����� �����������
	cout << offset << "Hello \"World\"\n";
	cout << "\n";
	cout << endl;
	cout << newline;
	cout << 22 << "\t������\t���";
#endif

	cout << true << endl;
	cout << false << endl;


	//size of variable
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;
	//INT_MAX - ������������ �������� ��� ��������� int
	//UINT_MAX - unsigned int max (������������ �������� ��� ������������ int)
	//U - UNSIGNED
	unsigned short a = -3;
	cout << a << endl;

	float;	//4 Bytes - ������������ ����� ��������� ��������
	double;	//8 Bytes - ������������ ����� ������� ��������

	cout << FLT_MIN << " ... " << FLT_MAX << endl;

	cout << .0001 << endl;
	cout << 1e-4 << endl;

	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	//�������������� 
	//identifier (�������������) - ��� ���.
	//int vasya=0;
	//cout << vasya << endl;

	int Place1;
	int _1stPlace;
	double Price=0;
	cout << Price << endl;
	//undeclared identifier - ������������� �������������
	//declaration - ����������
	//declare - ���������
	//declaration of variable - ���������� ����������

	int True;
	int attendance;	//������������
	int b;
	double price;
	double price_of_coffee=0;
	int T;	//������
	int F;	//�������

	cout << price_of_coffee << endl;
	//������������� - ��� ���������� ���������� ��������.
	//�������������������
	
	double price_of_tea;	//������ ���������� ����������
	double price_of_capucino = 0;	//������������� ��� ����������

	price_of_tea = 0;	//������������� ����� ����������

	int number_of_pencils;
	cout << "������� ���������� ����������: ";
	cin >> number_of_pencils;	//������������� ������ � ����������

	cout << typeid(5).name() << endl;
}

/*
cout (Console Out) - ��� ����� ������ �� �����.
������� �������� � ���� �������.

<< - �������� ��������������� � �����, 
�������������� �������� � ����� cout.

"Hello World" - ��� ��������� ���������.
��������� ��������� - ��� ������������������ ��������, 
����������� � ""

; - ������� ����� ���������.
*/

/*
				Escape-������������������ (Esc):
\ - Backslash (�������� ����� �����)
/ - Slash (����� �����)

\n - ������ 'n' ����������� ��� ������ \
\ (Backslash) - ��� ������ ������ ������������ �������� ������� �������

\" - �������� ����������� �������� �������.
\\ - ����� ������� \ � �������

\n - new line (��������� ������ � ������ ��������� ������).
\t - tab. ������� � ������� ������ ���������.
	 ������ ��������� �������� �� 8�� ��������.
*/

/*
----------------------------------------------
1. ABC....Zabc....Z0123...9_;
2. ��� �� ����� ���������� � �����;
3. ����� ���������� ����������������;
4. ��� ���������� ���������� ������ ������������ �������� ����� ����� C++.
----------------------------------------------
*/