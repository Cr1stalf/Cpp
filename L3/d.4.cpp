#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
m:  cout << "������� ����� �����: ";
	cin >> n;
	while (n > 14 || n < 6)
	{
		cout << "�� ����� ������������ ����� �����, ���������� ������ �� 6 �� 14\n";
		goto m;
	}

	switch (n)
	{
	case 6: cout << "�������";
		break;
	case 7: cout << "������";
		break;
	case 8: cout << "��������";
		break;
	case 9: cout << "�������";
		break;
	case 10: cout << "�������";
		break;
	case 11: cout << "�����";
		break;
	case 12: cout << "����";
		break;
	case 13: cout << "������";
		break;
	case 14: cout << "���";
		break;
	default: cout << "������";
		break;
	}
	return 0;
}