#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Shift.h"
#include"Sort.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимамльное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	/*int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);


	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "\n---------------------------------------------------\n";
	shiftLeft(i_arr_2, ROWS, COLS, 3);
	Print(i_arr_2, ROWS, COLS);
	cout << "\n---------------------------------------------------\n";
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "\n---------------------------------------------------\n";

	double d_arr_2[ROWS][COLS];
	//FillRand(d_arr_2, ROWS, COLS);
	//Print(d_arr_2, ROWS, COLS);

}