#include<iostream>
using namespace std;

//#define FOR_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;	//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

}