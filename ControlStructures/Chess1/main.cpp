#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define VERTICAL_LINE		(char)179
#define HORIZONTAL_LINE		"\xC4\xC4"
//#define HORIZONTAL_LINE		(char)196
//#define BLACK_BOX			(char)32	//Space
#define BLACK_BOX			"\x20\x20"	//Space
#define WHITE_BOX			"\xDB\xDB"
//							 \x позволяет включить в строковую константу символ 
//								по его шестнадцатеричному ASCII-коду
//							 \xXX, где XX - шестнадцатеричный код символа
//#define WHITE_BOX			(char)219

void main()
{
	/*for (int i = 176; i < 224; i++)
	{
		//if (i % 16 == 0)cout << endl;
		//cout << (char)i << " ";
		cout << i << "\t" << (char)i << endl;
	}*/
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");	//Включаем кодировку по умолчанию.
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			/*else if ((i + j) % 2 == 0)cout << WHITE_BOX;
			else 	cout << BLACK_BOX;*/
			//else (i + j) % 2 == 0 ? cout << WHITE_BOX : cout << BLACK_BOX;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
}