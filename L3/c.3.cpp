#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
m:  cout << "������� ����� �����: ";
	cin >> n;
	while (n > 4 || n < 1)
	{
		cout << "�� ����� ������������ ����� �����, ���������� ������ �� 1 �� 4\n";
		goto m;
	}

	switch (n)
	{
	case 1: cout << "����";
		break;
	case 2: cout << "�����";
		break;
	case 3: cout << "�����";
		break;
	case 4: cout << "�����";
		break;
	default: cout << "������";
		break;
	}
	return 0;
}