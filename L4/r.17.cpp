#include <iostream>
using namespace std;

// calculate math average uneven elements, located higher main diagonal

void fillarray(int a[5][5], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
}
void printarray(int a[5][5], int rows, int cols)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}
int f(int a[5][5], int rows, int cols)
{
	int s = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i != j && i < j && a[i][j] % 2 != 0)
				s += a[i][j];
		}
	}

	return s;
}
int main()
{
	const int rows = 5, cols = 5;
	int a[rows][cols];
	fillarray(a, rows, cols);
	printarray(a, rows, cols);
	cout << endl << f(a, rows, cols);


	return 0;
}