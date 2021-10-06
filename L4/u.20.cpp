#include <iostream>
using namespace std;

// swap pillars by rule: first with the last, second with the penult...

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
void swapPillar(int** a, int rows, int cols, int j, int k)
{
	int t;
	for (int i = 0; i < rows; i++)
	{
		t = a[i][j];
		a[i][j] = a[i][k];
		a[i][k] = t;
	}
}
void f(int** a, int rows, int cols)
{
	int j = 0;
	float k = cols - 1;
	if (cols % 2 != 0)
		while (k != ceil(cols / 2))
		{
			swapPillar(a, rows, cols, j, k);
			j++;
			k--;
		}
	else
		for (int i = 0; i < cols / 2; i++)
		{
			swapPillar(a, rows, cols, j, k);
			j++;
			k--;
		}
}

int main()
{
	int rows, cols;
	int** a = create(rows, cols);

	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
	print(a, rows, cols);
	f(a, rows, cols);
	print(a, rows, cols);
	return 0;
}