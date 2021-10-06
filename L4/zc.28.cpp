#include <iostream>
using namespace std;

// for every string find sum of elements, write data in new array and find max element of this array

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
void print(int* b, int rows)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << b[i] << "\t";
	}
	cout << endl;
}
void f(int** a, int* b, int rows, int cols)
{
	int s;
	for (int i = 0; i < rows; i++)
	{
		s = 0;
		for (int j = 0; j < cols; j++)
		{
			s += a[i][j];
		}
		b[i] = s;
	}
}
int max(int* b, int rows)
{
	int max = 0;
	for (int i = 0; i < rows; i++)
	{
		if (b[i] > max)
			max = b[i];
	}

	return max;
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
	print(a, rows, cols);
	f(a, b, rows, cols);
	print(b, rows);
	cout << "max = " << max(b, rows);
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete[] a;
	delete[] b;
}