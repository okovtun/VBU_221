//ControlStructures
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	/*if (temperature > 0)	//���� (����������� > ����)
	{
		cout << "�� ����� �����" << endl;
	}
	else //� ��������� ������ (�����)
	{
		cout << "�� ����� �������" << endl;
	}*/

	if (temperature > 75)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 30)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -20)
	{
		cout << "������� �����" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
}