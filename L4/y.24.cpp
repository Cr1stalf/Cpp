#include <iostream>
using namespace std;

// determine if the given array contains a string of positive elements

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
int f(int** a, int rows, int cols)
{
	int k;
	for (int i = 0; i < rows; i++)
	{
		k = 0;
		for (int j = 0; j < cols; j++)
		{
			if (a[i][j] > 0)
				k++;
		}
		if (k == cols)
		{
			return 1;
		}
	}
	return 0;
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

	if (f(a, rows, cols) == 1)
		cout << "Array have a string of positive elements";
	else
		cout << "No";
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;

	return 0;
}