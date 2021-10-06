#include <iostream>
using namespace std;

// find max in string and replace him opposite

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
void f(int** a, int rows, int cols)
{
	int imax, jmax, max = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				imax = i;
				jmax = j;
			}
		}
		a[imax][jmax] = -a[imax][jmax];
	}
}

int main()
{
	int rows, cols;
	int** a = create(rows, cols);
	for (int i = 0; i < rows; i++) // fill array
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}

	print(a, rows, cols);
	f(a, rows, cols);
	print(a, rows, cols);

	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;

	return 0;
}