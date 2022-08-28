#include <iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;
using::cout;
using::sin;

#define WIDTH 5

int main()
{
	setlocale(LC_ALL, "Rus");

	int n;
	int x = 1;

	cout << "¬ведите число: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout.width(WIDTH/3*2+1);
			cout << " ";
			//cout << "\t";
		}

		for (int k = 0; k <= i; k++)
		{
			if
				(k == 0 || i == 0)
				x = 1;
			else
				x = x * (i - k + 1) / k;
			//cout << x << "   ";
			cout.width(WIDTH);
			cout << x;
		}
		cout << endl;
	}
}