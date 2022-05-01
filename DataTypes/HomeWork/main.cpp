#include <iostream>	
using namespace std;
#define srd "\t\t\t\t\t\t"

#define Zadacha1
//#define Zadacha2
//#define Zadacha3
//#define Zadacha4

void main()
{
	//#define Elka
	setlocale(LC_ALL, "Russian");
#if defined Elka
	cout << srd << "В лесу родилась елочка,\n" << srd << "В лесу она росла,\n" << srd << "Зимой и летом стройная,\n" << srd << "Зеленая была.\n\n";
	cout << srd << "Метель ей пела песенку:\n" << srd << "\"Спи, елочка, бай-бай!\"\n" << srd << "Мороз снежком укутывал:\n" << srd << "\"Смотри, не замерзай!\"\n\n";
	cout << srd << "Трусишка - зайка серенький\n" << srd << "Под елочкой скакал,\n" << srd << "Порою волк, сердитый волк,\n" << srd << "Рысцою пробегал.\n\n";
	cout << srd << "Чу!Снег по лесу частому\n" << srd << "Под полозом скрипит;\n" << srd << "Лошадка мохноногая\n" << srd << "Торопится, бежит.\n\n";
	cout << srd << "Везет лошадка дровенки,\n" << srd << "А в дровнях - мужичок,\n" << srd << "Срубил он нашу елочку\n" << srd << "Под самый корешок.\n\n";
	cout << srd << "Теперь она, нарядная,\n" << srd << "На праздник к нам пришла\n" << srd << "И много, много радостей\n" << srd << "Детишкам принесла.";
#endif


	//Задача 1
#if defined Zadacha1
	cout << "\n\nПреобразование числа в денежный формат.\n";
	double dengi; //деньги в дробном числе
	int grivni, copeiki; //целая часть (гривны) и дробная часть (копейки)
	cout << "Введите дробное число -> ";
	cin >> dengi;
	dengi += 1e-8;
	grivni = dengi;
	copeiki = (dengi - grivni) * 100;
	cout << grivni << " грн. " << copeiki << " коп.\n";
#endif
	//Задача 2
#if defined Zadacha2
	cout << "\n\nВычисление стоимости покупки.\n";
	int ktet, kkar; //количество тетрадей и количество карандашей
	double ctet1, ckar; //цена тетради и цена карандаша
	cout << "Введите исходные данные:\n";
	cout << "Цена тетради (грн.) -> ";
	cin >> ctet1;
	cout << "Количество тетрадей -> ";
	cin >> ktet;
	cout << "Цена карандаша (грн.) -> ";
	cin >> ckar;
	cout << "Количество карандашей -> ";
	cin >> kkar;
	double stpok1; //стоимость покупки
	stpok1 = ctet1 * ktet + ckar * kkar;
	cout << "Стоимость покупки: " << stpok1 << " грн.";
#endif
	//Задача 3
#if defined Zadacha3
	cout << "\n\nВычисление стоимости покупки.\n";
	int k_komp; //количество комплектов
	double c_tet2, c_obl; //цена тетради и цена обложки
	cout << "Введите исходные данные:\n";
	cout << "Цена тетради (грн.) -> ";
	cin >> c_tet2;
	cout << "Цена обложки (грн.) -> ";
	cin >> c_obl;
	cout << "Количество комплектов -> ";
	cin >> k_komp;
	double stpok2; //стоимость покупки
	stpok2 = (c_tet2 + c_obl) * kkomp;
	cout << "Стоимость покупки: " << stpok2 << " грн.";
#endif
	//Задача 4
#if defined Zadacha4
	cout << "\n\nВычисление стоимости поездки на дачу и обратно.\n";
	int rdach; //расстояние до дачи
	double rben, cben; //расход бензина на 100 км. и цена бензина
	cout << "Расстояние до дачи (км) -> ";
	cin >> rdach;
	cout << "Расход бензина (литров на 100 км пробега) -> ";
	cin >> rben;
	cout << "Цена бензина (грн.) -> ";
	cin >> cben;
	double stben; //стоимость бензина на весь путь
	stben = (double)(rdach * 2 * (rben / 100) * cben);
	cout << "Поездка на дачу и обратно обйдётся в " << round(stben * 100) / 100 << " грн.";
#endif
}