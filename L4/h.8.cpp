#include <iostream>
using namespace std;

// ��������� ����� ��������� �������, ���������� � �������� �������� [b, c]

int main()
{
	const int rows = 3, cols = 3;
	int b, c, s = 0;
	int a[rows][cols];

	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	for (int i = 0; i < rows; i++) // ������������� �������
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < rows; i++) // ����� ������� �� �����
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) // �������� �������� ��������� �������, ������� �������� � ��������
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = b; k <= c; k++)
			{
				if (a[i][j] == k)
					s += a[i][j];
			}
		}
	}

	cout << s;

	return 0;
}