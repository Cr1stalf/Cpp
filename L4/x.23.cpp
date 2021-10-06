#include <iostream>
using namespace std;

// fill array specific method first column top down, second upwards...

int** create(int& rows, int& cols) // creates a array
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
void fill(int** a, int rows, int cols)
{
	int n = 1;
	for (int j = 0; j < cols; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			if (j % 2 == 0)
				a[i][j] = n;
			else
				a[cols - i - 1][j] = n;
			n++;
		}
	}
}

int main()
{
	int rows, cols, n;
	int** a = create(rows, cols);
	fill(a, rows, cols);
	print(a, rows, cols);
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;

	return 0;
}