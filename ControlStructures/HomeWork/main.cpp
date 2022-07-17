#include <iostream>
using namespace std;
using::cout;
using::sin;

#define FIGURES
//#define CHESSBOARD
//#define HARDCHESS

int main()
{
	setlocale(LC_ALL, ".866");

#ifdef FIGURES
	cout << "0)" << "\n" << endl;
	for (int i = 0; i < 5; i++) // ряды
	{
		for (int j = 0; j < 5; j++) // столбцы
			cout << "*";
		cout << endl;
	}

	cout << "\n" << "1)" << endl;
	for (int i = 0; i < 5; i++) // ряды
	{
		for (int j = 0; j <= i; j++) // столбцы
			cout << "*";
		cout << endl;

	}

	cout << "\n" << "2)" << endl;
	for (int i = 0; i < 5; i++) // ряды
	{
		for (int j = 0; j < 5 - i; j++)
			cout << "*";
		cout << endl;
	}

	cout << "\n" << "3)" << endl;
	for (int i = 1; i <= 5; i++) // ряды
	{
		for (int j = 1; j < i; j++)
			cout << " ";
		{
			for (int k = i; k <= 5; k++)
				cout << "*";
			cout << endl;
		}
	}

	cout << "\n" << "4)" << "\n" << endl;
	for (int i = 1; i <= 5; i++) // ряды
	{
		for (int j = i; j < 5; j++)
			cout << " ";
		{
			for (int k = 1; k <= i; k++)
				cout << "*";
			cout << endl;
		}

	}

	cout << "\n" << "5)" << endl;
	int n = 5; // количество строк и столбцов
	int a = n; // левая верняя часть
	int b = n; // правая верхняя часть
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < n * 2; j++)
		{
			if (j == a || j == b)
				cout << "/";
			else
				cout << " ";
		}
		a--;
		b++;
		cout << "\n" << endl;
	}


	int c = 1; // левая нижняя
	int d = n * 2 - 1; // правая нижняя

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < n * 2; j++)
		{
			if (j == c || j == d)
				cout << "/";
			else
				cout << " ";
		}
		c++;
		d--;
		cout << "\n" << endl; // какая-то фигня получилась((
	}

	cout << "\n" << "6)" << endl;
	for (int i = 0; i < 5; i++) // "+" четные, "-" нечётные 
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i + j) % 2 == 0)cout << "+";
			else				 cout << "-";
		}
		cout << endl;
	}
#endif // FIGURES


#ifdef CHESSBOARD
	int n;
	cout << "Enter board size: " << endl;
	cin >> n;

	unsigned char w = 176;
	unsigned char b = 219;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				cout << b;
			else cout << w;
		}
		cout << endl; // некрасивая какая-то(

	}

#endif // CHESSBOARD


#ifdef HARDCHESS
	int n;
	cout << "Enter board size: " << endl;
	cin >> n;


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				if ((i + k) % 2)
				{
					for (int i = 0; i < 5; i++)
						cout << "  ";

				}
				else
				{
					for (int i = 0; i < 5; i++)
						cout << "* ";

				}
			}
			if (j < 4)
				cout << endl;

		}
		cout << endl;
	}
#endif // HARDCHESS

}