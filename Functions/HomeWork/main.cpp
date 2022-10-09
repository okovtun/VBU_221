#include<iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(float arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(float arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);


int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
float Sum(float arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);
float Avg(float arr[], const int n);

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);


void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int minValueIn(int arr[], int n);
double minValueIn(double arr[], int n);
char minValueIn(char arr[], int n);
float minValueIn(float arr[], int n);

int maxValueIn(int arr[], int n);
double maxValueIn(double arr[], int n);
char maxValueIn(char arr[], int n);
float maxValueIn(float arr[], int n);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], int n, int number_of_shifts);
void shiftLeft(double arr[], int n, int number_of_shifts);
void shiftLeft(char arr[], int n, int number_of_shifts);
void shiftLeft(float arr[], int n, int number_of_shifts);

void shiftRight(int arr[], int n, int number_of_shifts);
void shiftRight(double arr[], int n, int number_of_shifts);
void shiftRight(char arr[], int n, int number_of_shifts);
void shiftRight(float arr[], int n, int number_of_shifts);

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;


	//int number_of_shifts; // количество сдвигов

	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);

	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	shiftLeft(i_arr_2, ROWS, COLS, 3);
	Print(i_arr_2, ROWS, COLS);

	cout << "\n-----------------------------------------------------\n";

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;


}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 1000;
		}
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return (sum);
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}


int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
		return sum;
	}
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			sum += arr[i][j];
	}
	return sum;
}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			sum += arr[i][j];
	}
	return (char)sum;
}
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			sum += arr[i][j];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	{
		return (double)Sum(arr, n) / n;
	}
}
double Avg(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		return (double)Sum(arr, n) / n;
	}
}
char Avg(char arr[], const int n)
{
	{
		return (char)Sum(arr, n) / n;
	}
}
float Avg(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		return (float)Sum(arr, n) / n;
	}
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (char)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (float)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = 0; j < ROWS * COLS; j++)
		{
			if (arr[0][j] < arr[0][i])
			{
				int buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = 0; j < ROWS * COLS; j++)
		{
			if (arr[0][j] < arr[0][i])
			{
				double buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
			}
		}
	}
}



int minValueIn(int arr[], int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
char minValueIn(char arr[], int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return (char)min;
}
float minValueIn(float arr[], int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return (char)min;
}
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return (char)min;
}

int maxValueIn(int arr[], int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char maxValueIn(char arr[], int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return (char)max;
}
float maxValueIn(float arr[], int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return (char)max;
}
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

void shiftLeft(int arr[], int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(float arr[], int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

// со сдвигами ну никак(

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftRight(int arr[], int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}

