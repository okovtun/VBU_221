#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* push_back(int arr[], int& n, int value);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	
	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);

	Print(arr, n);

	/*
					DEBUG ASSERTION FAILED
		1. Удаляется область стека, т.е., когда оператору delete[] был передан адрес переменной или массива,
		   объявленного в функции main() или любой другой функции, т.е., статический массив;
		2. Оператору delete[] повторно передается один и тот же адрес;
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
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1]{};
	//2) Копируем все значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем адрес исходного массива адресом буфера:
	arr = buffer;
	//5) Только теперь в массив arr можно добавить еще одно значение, потому что в массиве появился еще один элемент:
	arr[n] = value;
	//6) После добавления элемента в массив, количество его элементов увеличивается на 1:
	n++;
	return arr;
}