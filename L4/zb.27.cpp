#include <iostream>
using namespace std;

// for every string find sum of elements with numbers from k1 to k2 and write data in new array

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
void f(int** a, int* b, int rows, int cols, int k1, int k2)
{
	int s;
	for (int i = 0; i < rows; i++)
	{
		s = 0;
		for (int j = 0; j < cols; j++)
		{
			for (int k = k1; k <= k2; k++)
			{
				if (a[i][j] == k)
					s += a[i][j];
			}
		}
		b[i] = s;
	}
}

int main()
{
	int rows, cols, k1, k2;
	int** a = create(rows, cols);
	int* b = new int[rows];
	cout << "k1 = ";
	cin >> k1;
	cout << "k2 = ";
	cin >> k2;
	cout << "array\n"; for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
	print(a, rows, cols);
	f(a, b, rows, cols, k1, k2);
	print(b, rows);
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete[] a;
	delete[] b;
}