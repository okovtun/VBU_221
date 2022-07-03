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
	int n;	//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL
	int n;	//�����, �������� � ����������
	cout << "������� �����: "; cin >> n;
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
	double a;	//��������� �������
	int n;		//���������� �������
	double N = 1;	//�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
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
		//(char)i - ����� �������������� ���������� 'i' � ��� ������ 'char'
	}
#endif // ASCII

	int n = 10;
	for (int i = 1; i <= n; i++)//i-� for
	{
		for (int j = 1; j <= n; j++)	//j-� for
		{
			//cout << i << " * " << j << " = " << i*j << endl;
			cout << i * j << "\t";
		}
		cout << endl;
	}
}