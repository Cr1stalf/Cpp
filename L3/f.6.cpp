#include <iostream>
using namespace std;

// � ������ 1990 ������ m �������, ���������� �������� �������� ������

int main()
{
	setlocale(LC_ALL, "ru");
	int m;
	cin >> m;
	while (m > 12)
		m -= 12;
	switch (++m)
	{
	case 1: cout << "������";
		break;
	case 2: cout << "�������";
		break;
	case 3: cout << "����";
		break;
	case 4: cout << "������";
		break;
	case 5: cout << "���";
		break;
	case 6: cout << "����";
		break;
	case 7: cout << "����";
		break;
	case 8: cout << "������";
		break;
	case 9: cout << "��������";
		break;
	case 10: cout << "�������";
		break;
	case 11: cout << "������";
		break;
	case 12: cout << "�������";
		break;
	}
}