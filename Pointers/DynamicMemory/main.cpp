#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* push_back(int arr[], int& n, int value);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];
	
	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "������� ����������� ��������: "; cin >> value;
	arr = push_back(arr, n, value);

	Print(arr, n);

	/*
					DEBUG ASSERTION FAILED
		1. ��������� ������� �����, �.�., ����� ��������� delete[] ��� ������� ����� ���������� ��� �������,
		   ������������ � ������� main() ��� ����� ������ �������, �.�., ����������� ������;
		2. ��������� delete[] �������� ���������� ���� � ��� �� �����;
	*/
	
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int* push_back(int arr[], int& n, int value)
{
	//1) ������� �������� ������ ������� �������:
	int* buffer = new int[n + 1]{};
	//2) �������� ��� �������� �� ��������� ������� � ��������:
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	//3) ������� �������� ������:
	delete[] arr;
	//4) ��������� ����� ��������� ������� ������� ������:
	arr = buffer;
	//5) ������ ������ � ������ arr ����� �������� ��� ���� ��������, ������ ��� � ������� �������� ��� ���� �������:
	arr[n] = value;
	//6) ����� ���������� �������� � ������, ���������� ��� ��������� ������������� �� 1:
	n++;
	return arr;
}