#include <iostream>
#include <conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");

	cout << "\n\tВыберете фигуру, которую вы хотели бы вывести:\n\n";
	//Идею меню подсмотрела у Артема :)

	char stroka_1[] = { "Для вывода квадрата нажмите " };
	char stroka_2[] = { "Для вывода треугольника_1 нажмите " };
	char stroka_3[] = { "Для вывода треугольника_2 нажмите " };
	char stroka_4[] = { "Для вывода треугольника_3 нажмите " };
	char stroka_5[] = { "Для вывода треугольника_4 нажмите " };
	char stroka_6[] = { "Для вывода ромба нажмите " };
	char stroka_7[] = { "Для вывода квадрата_1 нажмите " };
	char stroka_8[] = { "Для вывода шахматной доски_1 нажмите " };
	char stroka_9[] = { "Для вывода шахматной доски_2 нажмите " };
	cout << " " << stroka_1 << " \"0\"" << endl;
	cout << " " << stroka_2 << " \"1\"" << endl;
	cout << " " << stroka_3 << " \"2\"" << endl;
	cout << " " << stroka_4 << " \"3\"" << endl;
	cout << " " << stroka_5 << " \"4\"" << endl;
	cout << " " << stroka_6 << " \"5\"" << endl;
	cout << " " << stroka_7 << " \"6\"" << endl;
	cout << " " << stroka_8 << " \"7\"" << endl;
	cout << " " << stroka_9 << " \"8\"" << endl;
	cout << "Для выхода нажмите Esc";

	int key = _getch();
	//cout << key<< endl;

	switch (key)
	{

	case 48: //квадрат
		system("cls");
		int n;
		cout << "Введите число: "; cin >> n;

		for (int i = 0; i < n; i++)
		{
			for (int i = 0; i < n; i++)
			{
				cout << "* ";//вывод строки из звездочек
			}
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;

	case 49: //треугольник_1 
		system("cls");
		int n1;
		cout << "Введите число: "; cin >> n1;
		for (int i = 0; i <= n1; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;

	case 50: system("cls"); //треугольник_2 
		int n2;
		cout << "Введите число: "; cin >> n2;
		for (int i = 0; i < n2; i++)
		{
			for (int j = i; j < n2; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;


	case 51:system("cls"); //треугольник_3
		int n3;
		cout << "Введите число: "; cin >> n3;
		for (int i = 0; i < n3; i++)
		{
			for (int j = 0; j < i; j++) cout << "  ";
			for (int k = i; k < n3; k++) cout << "* ";
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;

	case 52://треугольник_4
		system("cls");
		int n4;
		cout << "Введите число: "; cin >> n4;
		for (int i = 0; i < n4; i++)
		{
			for (int k = i; k < n4; k++) cout << "  ";
			for (int j = 0; j <= i; j++) cout << "* ";

			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;

	case 53://ромб
		system("cls");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i + j == 4) cout << "/";
				else cout << " ";
			}
			for (int j = 5; j < 10; j++)
			{
				if (j - i == 5) cout << "\\";
				else cout << " ";
			}
			cout << endl;
		}

		for (int i = 5; i < 10; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i - j == 5) cout << "\\";
				else cout << " ";
			}
			for (int j = 5; j < 10; j++)
			{
				if (j + i == 14) cout << "/";
				else cout << " ";
			}
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;

	case 54: //квадрат 1
		system("cls");
		int n5;
		cout << "Введите число: "; cin >> n5;
		for (int i = 0; i < n5; i++)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < n5; j++)
				{
					if (j % 2 == 0) cout << '+';
					else cout << '-';
				}
			}
			else for (int j = 0; j < n5; j++)
			{
				if (j % 2 == 0) cout << '-';
				else cout << '+';
			}
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;

	case 55:  //шахматное поле 1, рамку выводит при вводе "8"
		system("cls");
		int n6;
		cout << ("Введите число клеток (в строке) шахматного поля: "); cin >> n6;
		cout << endl;
		setlocale(LC_ALL, "C");
		cout << "\t";
		cout << char(201);
		for (int i = 1; i < (2 * n6 - 1); i++)
		{
			cout << char(205);
		}
		cout << char(187);
		cout << endl;

		for (int i = 0; i < n6; i++)
		{
			cout << "\t" << char(199) << " ";
			if (i % 2 == 0)
			{
				for (int j = 0; j < n6; j++)
				{
					if (j % 2 == 0) cout << char(254);
					else cout << "  ";

				}
			}
			else
			{
				for (int j = 0; j < n6; j++)
				{
					if (j % 2 == 0) cout << "  ";
					else cout << char(254);
				}
			}
			cout << " " << char(182) << " ";
			cout << endl;
		}
		cout << "\t" << char(200);
		for (int i = 1; i < (2 * n6 - 1); i++)
		{
			cout << char(205);
		}
		cout << char(188);
		cout << endl;
		system("pause");
		system("cls");
		main();
		break;

	case 56: // шахматное поле 2
		system("cls");

		for (int k = 0; k < 5; k++)
		{
			if (k % 2 == 0)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 25; j++)
					{
						if ((j < 5) || ((j > 9) && (j < 15)) || ((j > 19) && (j < 25))) cout << "* ";
						else cout << "  ";
					}


					cout << endl;
				}
			}
			else
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 25; j++)
					{
						if ((j < 5) || ((j > 9) && (j < 15)) || ((j > 19) && (j < 25))) cout << "  ";
						else cout << "* ";
					}


					cout << endl;
				}
			}
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;
	case 27: break;
	default:
		cout << "Повторите ввод!";
		system("pause");
		system("cls");
		main();
		break;

	}
}