#include <iostream>
using namespace std;

// ���������� ��� �����, � ������� ����� �������� ������

int main()
{
	const int rows = 3, cols = 3;
	int a[rows][cols];
	for (int i = 0; i < rows; i++) // ���� ������� � ����������
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < rows; i++) // ����� ������� �� �����
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if ((i + j) % 2 == 0)
				cout << a[i][j] << " ";
		}
	}
}