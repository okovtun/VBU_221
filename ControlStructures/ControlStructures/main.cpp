//ControlStructures
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	/*if (temperature > 0)	//ЕСЛИ (температура > нуля)
	{
		cout << "На улице тепло" << endl;
	}
	else //В противном случае (иначе)
	{
		cout << "На улице холодно" << endl;
	}*/

	if (temperature > 75)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на Экваторе" << endl;
	}
	else if (temperature > 30)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -20)
	{
		cout << "Сильный мороз" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
}