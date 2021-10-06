#include <iostream>
using namespace std;

// посчитать количество нечётных элементов массива

int** create(int& rows, int& cols)
{
	cout << "rows = ";
	cin >> rows;
	cout << "cols = ";
	cin >> cols;
	int** a = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		a[i] = new int[cols];
	}

	return a;
}

void print(int** mas, int rows, int cols)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int rows, cols, k = 0;
	int** a = create(rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}

	print(a, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (a[i][j] % 2 != 0)
				k++;
		}
	}
	cout << endl << k;
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;
	return 0;
}