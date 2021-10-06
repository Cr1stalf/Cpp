#include <iostream>
using namespace std;

// вывести на экран индексы всех элементов, больших заданного числа

int main()
{
	const int rows = 3, cols = 3;
	int a[rows][cols], x;

	cout << "x = ";
	cin >> x;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "a\ti\tj" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (a[i][j] > x)
				cout << a[i][j] << "\t" << i + 1 << "\t" << j + 1 << endl;
		}
	}
	return 0;
}