#include <iostream>
using namespace std;

// посчитать среднее арифметическое элементов

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

int f(int** a, int rows, int cols)
{
	int S = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			S += a[i][j];
		}
	}

	return S / (rows * cols);
}

int main()
{
	int rows, cols;
	int** a = create(rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
	print(a, rows, cols);
	cout << "\nS = " << f(a, rows, cols) << endl;
	print(a, rows, cols);

	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;

	return 0;
}