#include<iostream>
using namespace std;

//#define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	double money;	//��� ���������� ����� ������� �������� �����, 
					//��������� � ����������
	cout << "������� �������� �����: ";	//������� �� ����� ����������� �� ����
	cin >> money;	//������ �������� � ����������
	cout << money << endl;
	int grn = money;	//������� �������������� ����� �� double � int � ������� ������
	cout << grn << " ���.\t";
	money -= grn;	//�������� ����������� ����� ����� �����
	int cop = money * 100;
	cout << cop << " ���.\n";
#endif

#ifdef TASK_2
	double price_of_notebook;	//���� �������
	int number_of_notebooks;	//���������� ��������
	double price_of_pencil;		//���� ���������
	int number_of_pencils;		//���������� ����������
	cout << "������� ��������� �������: "; cin >> price_of_notebook;
	cout << "���������� ��������: "; cin >> number_of_notebooks;
	cout << "������� ���� ���������: "; cin >> price_of_pencil;
	cout << "���������� ����������: "; cin >> number_of_pencils;
	double total_price = price_of_notebook * number_of_notebooks + price_of_pencil * number_of_pencils;
	cout << "����� ��������� �������: " << total_price << " ���.\n";
#endif
}

/*
------------------------------------------------
/ - Slash (����� �����)
\ - Backslash (�������� ����� �����) - ������ ������ ������������ �������� ������� �������.
------------------------------------------------
*/