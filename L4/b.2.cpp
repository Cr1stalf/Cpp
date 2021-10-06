#include <iostream>
using namespace std;

// заменитьвсе элементы массива, меньшие заданного числа m

void print(int mas[3][3], int a, int b)
{
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int a[3][3], m;
	cout << "m = ";
	cin >> m;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	print(a, 3, 3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] < m)
				a[i][j] = m;
		}
	}
	print(a, 3, 3);
	return 0;
}