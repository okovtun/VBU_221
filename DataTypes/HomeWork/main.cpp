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
	cout << srd << "� ���� �������� ������,\n" << srd << "� ���� ��� �����,\n" << srd << "����� � ����� ��������,\n" << srd << "������� ����.\n\n";
	cout << srd << "������ �� ���� �������:\n" << srd << "\"���, ������, ���-���!\"\n" << srd << "����� ������� ��������:\n" << srd << "\"������, �� ��������!\"\n\n";
	cout << srd << "�������� - ����� ���������\n" << srd << "��� ������� ������,\n" << srd << "����� ����, �������� ����,\n" << srd << "������ ��������.\n\n";
	cout << srd << "��!���� �� ���� �������\n" << srd << "��� ������� �������;\n" << srd << "������� ����������\n" << srd << "���������, �����.\n\n";
	cout << srd << "����� ������� ��������,\n" << srd << "� � ������� - �������,\n" << srd << "������ �� ���� ������\n" << srd << "��� ����� �������.\n\n";
	cout << srd << "������ ���, ��������,\n" << srd << "�� �������� � ��� ������\n" << srd << "� �����, ����� ��������\n" << srd << "�������� ��������.";
#endif


	//������ 1
#if defined Zadacha1
	cout << "\n\n�������������� ����� � �������� ������.\n";
	double dengi; //������ � ������� �����
	int grivni, copeiki; //����� ����� (������) � ������� ����� (�������)
	cout << "������� ������� ����� -> ";
	cin >> dengi;
	dengi += 1e-8;
	grivni = dengi;
	copeiki = (dengi - grivni) * 100;
	cout << grivni << " ���. " << copeiki << " ���.\n";
#endif
	//������ 2
#if defined Zadacha2
	cout << "\n\n���������� ��������� �������.\n";
	int ktet, kkar; //���������� �������� � ���������� ����������
	double ctet1, ckar; //���� ������� � ���� ���������
	cout << "������� �������� ������:\n";
	cout << "���� ������� (���.) -> ";
	cin >> ctet1;
	cout << "���������� �������� -> ";
	cin >> ktet;
	cout << "���� ��������� (���.) -> ";
	cin >> ckar;
	cout << "���������� ���������� -> ";
	cin >> kkar;
	double stpok1; //��������� �������
	stpok1 = ctet1 * ktet + ckar * kkar;
	cout << "��������� �������: " << stpok1 << " ���.";
#endif
	//������ 3
#if defined Zadacha3
	cout << "\n\n���������� ��������� �������.\n";
	int k_komp; //���������� ����������
	double c_tet2, c_obl; //���� ������� � ���� �������
	cout << "������� �������� ������:\n";
	cout << "���� ������� (���.) -> ";
	cin >> c_tet2;
	cout << "���� ������� (���.) -> ";
	cin >> c_obl;
	cout << "���������� ���������� -> ";
	cin >> k_komp;
	double stpok2; //��������� �������
	stpok2 = (c_tet2 + c_obl) * kkomp;
	cout << "��������� �������: " << stpok2 << " ���.";
#endif
	//������ 4
#if defined Zadacha4
	cout << "\n\n���������� ��������� ������� �� ���� � �������.\n";
	int rdach; //���������� �� ����
	double rben, cben; //������ ������� �� 100 ��. � ���� �������
	cout << "���������� �� ���� (��) -> ";
	cin >> rdach;
	cout << "������ ������� (������ �� 100 �� �������) -> ";
	cin >> rben;
	cout << "���� ������� (���.) -> ";
	cin >> cben;
	double stben; //��������� ������� �� ���� ����
	stben = (double)(rdach * 2 * (rben / 100) * cben);
	cout << "������� �� ���� � ������� ������� � " << round(stben * 100) / 100 << " ���.";
#endif
}