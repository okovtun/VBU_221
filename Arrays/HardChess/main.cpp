#include <iostream>
#include <conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");

	cout << "\n\t�������� ������, ������� �� ������ �� �������:\n\n";
	//���� ���� ����������� � ������ :)

	char stroka_1[] = { "��� ������ �������� ������� " };
	char stroka_2[] = { "��� ������ ������������_1 ������� " };
	char stroka_3[] = { "��� ������ ������������_2 ������� " };
	char stroka_4[] = { "��� ������ ������������_3 ������� " };
	char stroka_5[] = { "��� ������ ������������_4 ������� " };
	char stroka_6[] = { "��� ������ ����� ������� " };
	char stroka_7[] = { "��� ������ ��������_1 ������� " };
	char stroka_8[] = { "��� ������ ��������� �����_1 ������� " };
	char stroka_9[] = { "��� ������ ��������� �����_2 ������� " };
	cout << " " << stroka_1 << " \"0\"" << endl;
	cout << " " << stroka_2 << " \"1\"" << endl;
	cout << " " << stroka_3 << " \"2\"" << endl;
	cout << " " << stroka_4 << " \"3\"" << endl;
	cout << " " << stroka_5 << " \"4\"" << endl;
	cout << " " << stroka_6 << " \"5\"" << endl;
	cout << " " << stroka_7 << " \"6\"" << endl;
	cout << " " << stroka_8 << " \"7\"" << endl;
	cout << " " << stroka_9 << " \"8\"" << endl;
	cout << "��� ������ ������� Esc";

	int key = _getch();
	//cout << key<< endl;

	switch (key)
	{

	case 48: //�������
		system("cls");
		int n;
		cout << "������� �����: "; cin >> n;

		for (int i = 0; i < n; i++)
		{
			for (int i = 0; i < n; i++)
			{
				cout << "* ";//����� ������ �� ���������
			}
			cout << endl;
		}
		system("pause");
		system("cls");
		main();
		break;

	case 49: //�����������_1 
		system("cls");
		int n1;
		cout << "������� �����: "; cin >> n1;
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

	case 50: system("cls"); //�����������_2 
		int n2;
		cout << "������� �����: "; cin >> n2;
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


	case 51:system("cls"); //�����������_3
		int n3;
		cout << "������� �����: "; cin >> n3;
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

	case 52://�����������_4
		system("cls");
		int n4;
		cout << "������� �����: "; cin >> n4;
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

	case 53://����
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

	case 54: //������� 1
		system("cls");
		int n5;
		cout << "������� �����: "; cin >> n5;
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

	case 55:  //��������� ���� 1, ����� ������� ��� ����� "8"
		system("cls");
		int n6;
		cout << ("������� ����� ������ (� ������) ���������� ����: "); cin >> n6;
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

	case 56: // ��������� ���� 2
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
		cout << "��������� ����!";
		system("pause");
		system("cls");
		main();
		break;

	}
}