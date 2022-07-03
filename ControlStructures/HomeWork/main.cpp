#include<iostream>
using namespace std;

//#define Task1
#define Task2 
//#define Task3 
//#define Task4 
//#define Task5 

void main()
{
	setlocale(LC_ALL, "");
#if defined Task1
	int n;
	int i;
	int reserve;
	cout << "Введите число для вычисления факториала";
	cin >> n;
	int factorial(int n);
	{
		reserve = 1;
		for (i = 1; i <= n; i++)
		{
			reserve *= i;
		}
		return reserve;
	}
	if (n > 0);
	{
		cout << factorial(n);
	}
	else
	{
		cout << "Error:n<0.";
	}
	return 0;

#endif
#if defined Task2
	int n, a;
	cout << "Введите основание и показатель степени: ";
	cin >> n >> a;
	int nva = 1;
	for (int i = 0; i < a; i++)
	{
		nva *= n;
	}
	cout << nva;
#endif
#if defined Task3
	void main(int argc, char* argv[]);
	{
		for (int i = 0; i < 255; i++)
			cout << (char)i << "\t";
		cout << endl;
		return 0;
}
#endif

}