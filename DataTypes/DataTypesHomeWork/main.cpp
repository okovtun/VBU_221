#include<iostream>
using namespace std;

//#define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	double money;	//Эта переменная будет хранить денежную сумму, 
					//введенную с клавиатуры
	cout << "Введите денежную сумму: ";	//Выводим на экран приглашение на ввод
	cin >> money;	//Вводим значение с клавиатуры
	cout << money << endl;
	int grn = money;	//Неявное преобразование типов из double в int с потерей данных
	cout << grn << " грн.\t";
	money -= grn;	//Отнимаем сохраненную ранее целую часть
	int cop = money * 100;
	cout << cop << " коп.\n";
#endif

#ifdef TASK_2
	double price_of_notebook;	//Цена тетради
	int number_of_notebooks;	//Количество тетрадей
	double price_of_pencil;		//Цена карандаша
	int number_of_pencils;		//Количество карандашей
	cout << "Введите стоимость тетради: "; cin >> price_of_notebook;
	cout << "Количество тетрадей: "; cin >> number_of_notebooks;
	cout << "Введите цену карандаша: "; cin >> price_of_pencil;
	cout << "Количество карандашей: "; cin >> number_of_pencils;
	double total_price = price_of_notebook * number_of_notebooks + price_of_pencil * number_of_pencils;
	cout << "Общая стоимость покупки: " << total_price << " грн.\n";
#endif
}

/*
------------------------------------------------
/ - Slash (Косая черта)
\ - Backslash (Обратная косая черта) - символ отмены специального значения другого символа.
------------------------------------------------
*/