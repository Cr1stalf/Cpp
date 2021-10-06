#include <iostream>
using namespace std;

// calculate A^2

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
void f(int** a, int** b, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int in = 0; in < cols; in++)
			{

				b[i][j] += a[i][in] * a[in][j];
			}
		}
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
	int** b = create(rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			b[i][j] = 0;
		}
	}
	print(a, rows, cols);
	f(a, b, rows, cols);
	print(b, rows, cols);


	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;

	for (int i = 0; i < rows; i++)
		delete b[i];
	delete b;
	return 0;
}