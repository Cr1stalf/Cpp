#include <iostream>
using namespace std;

void printCards(int card)
{
	switch (card)
	{
	case 6: cout << "������� ";
		break;
	case 7: cout << "������ ";
		break;
	case 8: cout << "�������� ";
		break;
	case 9: cout << "������� ";
		break;
	case 10: cout << "������� ";
		break;
	case 11: cout << "����� ";
		break;
	case 12: cout << "���� ";
		break;
	case 13: cout << "������ ";
		break;
	case 14: cout << "��� ";
		break;
	}
}

void printMast(int mast)
{
	switch (mast)
	{
	case 1: cout << "����";
		break;
	case 2: cout << "�����";
		break;
	case 3: cout << "�����";
		break;
	case 4: cout << "�����";
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int k, m;

k:  cout << "������� ����� �����: ";
	cin >> k;
	while (k > 14 || k < 6)
	{
		cout << "�� ����� ������������ ����� �����, ���������� ������ �� 6 �� 14\n";
		goto k;
	}

m:  cout << "������� ����� �����: ";
	cin >> m;
	while (m > 4 || m < 1)
	{
		cout << "�� ����� ������������ ����� �����, ���������� ������ �� 1 �� 4\n";
		goto m;
	}
	printCards(k);
	printMast(m);
}