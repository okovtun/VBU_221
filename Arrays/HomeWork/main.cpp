/*
� ������� Arrays ���������� ��������� ��������� �������� ��� ��������:
1. ������ �������� ���� ��� ��������� � ����������;
2. ������� ������ �� �����;
3. ������� ������ �� ����� � �������� ������� (�� ���������� �������� �� ��������);
4. ��������� ����� ��������� �������;
5. ��������� �������-�������������� ��������� �������;
6. ����� ����������� � ����������� �������� � �������;
---------------------------------------------------
���� ������ �� 10�� ���������, ����������� ����������
1	2	3	4	.... 10
��������� ���������� ����������� ����� ������� �� �������� ����� ���������
������� �����, ����� ������.
*/



#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	const int SIZE = 10;
	int arr[SIZE];
	int arr_left[SIZE];
	int arr_right[SIZE]{ 0 };

	int elem, summa = 0, el_min, el_max, shift;
	cout << "1. ������ �������� ���� ��� ��������� � ����������:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "������� " << i + 1 << "-� �������" << endl;
		cin >> arr[i];
	}
	cout << "2. ������� ������ �� �����:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	cout << "3. ������� ������ �� ����� � �������� ������� (�� ���������� �������� �� ��������):" << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	cout << "4. ��������� ����� ��������� �������:" << endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		summa += arr[i];
	}
	cout << "����� ���� ��������� ������� ����� " << summa << endl;

	cout << "5. ��������� �������-�������������� ��������� �������:" << endl;
	cout << "������� �������������� ��������� ������� ����� " << (double)summa / SIZE << endl;

	cout << "6. ����� ����������� � ����������� �������� � �������:" << endl;
	el_min = arr[0];
	el_max = arr[0];
	for (size_t i = 1; i < SIZE; i++)
	{
		el_min > arr[i] ? el_min = arr[i] : el_max = arr[i];
	}

	cout << "����������� �������� � ������� ����� " << el_min << endl;
	cout << "������������ �������� � ������� ����� " << el_max << endl;

	cout << "����������� ����� ������� �� �������� ����� ��������� c������ �����" << endl;

	cout << "������� �����, �� ������� ����� �������� �������� ������� �����" << endl;
	cin >> shift;
	for (int i = SIZE - 1; i > shift - 1; i--)
	{
		arr_left[i - shift] = arr[i];
	}
	for (int i = shift - 1; i >= 0; i--)
	{
		arr_left[SIZE + i - shift] = arr[i];
	}
	cout << "�������� ������:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	cout << "������ �� ������� �����:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr_left[i] << ", ";
	}
	cout << endl;


	cout << "������� �����, �� ������� ����� �������� �������� ������� ������" << endl;
	cin >> shift;
	for (int i = 0; i < SIZE; i++)
	{
		if (i < SIZE - shift)
			arr_right[i + shift] = arr[i];
		else arr_right[i + shift - SIZE] = arr[i];
	}
	cout << "�������� ������:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	cout << "������ �� ������� ������:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr_right[i] << ", ";
	}
	cout << endl;

}