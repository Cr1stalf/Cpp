#include <iostream>
using namespace std;

// even columns replace X vector

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
void print(int** a, int rows, int cols)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void f(int** a, int* b, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if ((j + 1) % 2 == 0)
			{
				a[i][j] = b[i];
			}
		}
	}
}

int main()
{
	int rows, cols;
	int** a = create(rows, cols);
	int* b = new int[rows];
	cout << "array\n"; for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "vector X\n"; for (int i = 0; i < rows; i++)
	{
		cin >> b[i];
	}
	print(a, rows, cols);
	f(a, b, rows, cols);
	print(a, rows, cols);
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete[] a;
	delete[] b;
}