#include <iostream>
using namespace std;

// заменить все элементы, попадающие в интервал [a, b] нулём

void print(int mas[4][4], int a, int b)
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
	int a[4][4], b, c;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> a[i][j];
		}
	}

	print(a, 4, 4);

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = b; k <= c; k++)
			{
				if (a[i][j] == k)
					a[i][j] = 0;
			}
		}
	}

	print(a, 4, 4);
	return 0;
}