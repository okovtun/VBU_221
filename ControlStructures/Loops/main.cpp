#include<iostream>
#include<conio.h>
using namespace std;
/*
--------------------------------------
while - цикл с предусловием
do...while - цикл с постусловием
for - цикл на заданное количество итераций
--------------------------------------
*/

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int n;	//Количество итераций
	int i = 0;//Счетчик цикла
	cout << "Введите количество итераций: ";
	cin >> n;
	while (i < n)//ПОКА (i < n)
	{
		cout << ++i << " Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: ";
	cin >> n;
	while (n--)
	{
		cout << n << " Hello World" << endl;
	}
#endif // WHILE_2

	char key;
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши 
		//и возвращает ASCII-код нажатой клавиши.
		//Функция _getch() объявлена в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной key в тип данных int,
		//для того чтобы увидеть ASCII-код нажатой клавиши.
	} while (true);	//Обеспечить выход из цикла по нажатии Escape
}