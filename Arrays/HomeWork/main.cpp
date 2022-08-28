/*
В проекте Arrays необходимо выполнить следующие действия над массивом:
1. Ввести значения всех его элементов с клавиатуры;
2. Вывести массив на экран;
3. Вывести массив на экран в обратном порядке (от последнего элемента до нулевого);
4. Вычислить сумму элементов массива;
5. Вычислить среднее-арифметическое элементов массива;
6. Найти минимальное т максимально значение в массиве;
---------------------------------------------------
Есть массив из 10ти элементов, заполненный значениями
1	2	3	4	.... 10
Небходимо обеспечить циклический сдвиг массива на заданное число элементов
сначала влево, потом вправо.
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
	cout << "1. Ввести значения всех его элементов с клавиатуры:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Введите " << i + 1 << "-й элемент" << endl;
		cin >> arr[i];
	}
	cout << "2. Вывести массив на экран:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	cout << "3. Вывести массив на экран в обратном порядке (от последнего элемента до нулевого):" << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	cout << "4. Вычислить сумму элементов массива:" << endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		summa += arr[i];
	}
	cout << "Сумма всех элементов массива равна " << summa << endl;

	cout << "5. Вычислить среднее-арифметическое элементов массива:" << endl;
	cout << "Среднее арифметическое элементов массива равно " << (double)summa / SIZE << endl;

	cout << "6. Найти минимальное и максимально значение в массиве:" << endl;
	el_min = arr[0];
	el_max = arr[0];
	for (size_t i = 1; i < SIZE; i++)
	{
		el_min > arr[i] ? el_min = arr[i] : el_max = arr[i];
	}

	cout << "Минимальное значение в массиве равно " << el_min << endl;
	cout << "Максимальное значение в массиве равно " << el_max << endl;

	cout << "Циклический сдвиг массива на заданное число элементов cначала влево" << endl;

	cout << "Введите число, на которое нужно сдвинуть элементы массива влево" << endl;
	cin >> shift;
	for (int i = SIZE - 1; i > shift - 1; i--)
	{
		arr_left[i - shift] = arr[i];
	}
	for (int i = shift - 1; i >= 0; i--)
	{
		arr_left[SIZE + i - shift] = arr[i];
	}
	cout << "Исходный массив:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	cout << "Массив со сдвигом влево:" << endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr_left[i] << ", ";
	}
	cout << endl;


	cout << "Введите число, на которое нужно сдвинуть элементы массива вправо" << endl;
	cin >> shift;
	for (int i = 0; i < SIZE; i++)
	{
		if (i < SIZE - shift)
			arr_right[i + shift] = arr[i];
		else arr_right[i + shift - SIZE] = arr[i];
	}
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	cout << "массив со сдвигом вправо:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr_right[i] << ", ";
	}
	cout << endl;

}