#include"Shift.h"

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)	//повторяем сдвиг массива на 1 элемен
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		/*for (int i = 0; i < ROWS; i++)
		{
			int buffer = arr[i][0];
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = buffer;
		}*/
		shiftLeft(arr[k], COLS, number_of_shifts);
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}