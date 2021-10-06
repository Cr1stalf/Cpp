#include <iostream>
using namespace std;

// посчитать сумму элементов массива, попадающих в заданный интервал [b, c]

int main()
{
	const int rows = 3, cols = 3;
	int b, c, s = 0;
	int a[rows][cols];

	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	for (int i = 0; i < rows; i++) // инициализация массива
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < rows; i++) // вывод массива на экран
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) // алгоритм перебора элементов массива, которые попадают в интервал
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