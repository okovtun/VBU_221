#include<iostream>
using namespace std;

#define offset	"\t\t\t\t\t"	//offset - имя макроса, "\t\t\t\t\t" - значение макроса
#define newline "\n"	//newline - имя макроса, "\n" - значение макроса
//#define (определить) создает макроопределение (макрос)
//директива #define указывает компилятору что заменить чем заменить

//#define ESCAPE_SEQUENCES

void main()	//Это главная функция
{
	setlocale(LC_ALL, "Russian");
#if defined ESCAPE_SEQUENCES
//если определено ESCAPE_SEQUENCES, 
//то нижеследующий код будет виден компилятору
	cout << offset << "Hello \"World\"\n";
	cout << "\n";
	cout << endl;
	cout << newline;
	cout << 22 << "\tПривет\tМир";
#endif

	cout << true << endl;
	cout << false << endl;


	//size of variable
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;
	//INT_MAX - максимальное значение для знакового int
	//UINT_MAX - unsigned int max (максимальное значение для беззнакового int)
	//U - UNSIGNED
	unsigned short a = -3;
	cout << a << endl;

	float;	//4 Bytes - вещественное число одинарной точности
	double;	//8 Bytes - вещественное число двойной точности

	cout << FLT_MIN << " ... " << FLT_MAX << endl;

	cout << .0001 << endl;
	cout << 1e-4 << endl;

	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	//Идентификаторы 
	//identifier (идентификатор) - это имя.
	//int vasya=0;
	//cout << vasya << endl;

	int Place1;
	int _1stPlace;
	double Price=0;
	cout << Price << endl;
	//undeclared identifier - необъявленный идентификатор
	//declaration - объявление
	//declare - объявлять
	//declaration of variable - объявление переменной

	int True;
	int attendance;	//посещаемость
	int b;
	double price;
	double price_of_coffee=0;
	int T;	//период
	int F;	//частота

	cout << price_of_coffee << endl;
	//Инициализация - это присвоение начального значения.
	//Проинициализировать
	
	double price_of_tea;	//просто объявление переменной
	double price_of_capucino = 0;	//Инициализация при объявлении

	price_of_tea = 0;	//инициализация после объявления

	int number_of_pencils;
	cout << "Введите количество карандашей: ";
	cin >> number_of_pencils;	//инициализация вводом с клавиатуры

	cout << typeid(5).name() << endl;
}

/*
cout (Console Out) - это поток вывода на экран.
Выводит значения в окно консоли.

<< - оператор перенаправления в поток, 
перенаправляет значения в поток cout.

"Hello World" - это строковая константа.
Строковая константа - это последовательность символов, 
заключенная в ""

; - признак конца выражения.
*/

/*
				Escape-последовательности (Esc):
\ - Backslash (обратная косая черта)
/ - Slash (косая черта)

\n - символ 'n' экранирован при помощи \
\ (Backslash) - это символ отмены специального значения другого символа

\" - отменяем специальное значение кавычек.
\\ - вывод символа \ в консоль

\n - new line (переводит курсор в начало следующей строки).
\t - tab. Выводит в консоль символ табуляции.
	 Символ табуляции занимает до 8ми пробелов.
*/

/*
----------------------------------------------
1. ABC....Zabc....Z0123...9_;
2. Имя НЕ может начинаться с цифры;
3. Имена переменных регистрозависимы;
4. Для именования переменных нельзя использовать ключевые слова языка C++.
----------------------------------------------
*/