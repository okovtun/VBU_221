#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123;//Обращение к элементу массива на запись
	//cout << arr[2] << endl;	//Обращение к тому же элементу, на чтение

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}