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
	double number;	//�����, �������� � ����������
	cout << "������� �����: "; cin >> number;
	if (number > 0 && number < 10)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif // TARGET

#ifdef CALC_1
	double a, b;	//�����, �������� � ����������
	char s;	//Sign - ���� ��������
	cout << "������� ���������: ";
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
		cout << "������� �������������� ���������: ";
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
		cout << "��� ������ ������� Esc, ��� ����������� ������� ����� �������" << endl;
	} while (_getch() != 27);
#endif // CALC_2

	int number;	//�����, �������� � ����������
	int reverse = 0;//�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	int buffer = number;	//��� ��������� ������ ����� �����, ���������� � ����������
	//����� ����� ��� ����, ����� ��������� ������ �������� �����������.
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