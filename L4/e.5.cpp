#include <iostream>
using namespace std;

// все элементы массива, меньшие заданного числа, увеличить в два раза

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

void deleteM(int** mas, int rows)
{
	for (int i = 0; i < rows; i++)
		delete mas[i];

	delete mas;

}
int main()
{
	int ROWS, COLS, m;
	cout << "m = ";
	cin >> m;
	int** a = create(ROWS, COLS);
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cin >> a[i][j];
		}
	}
	print(a, ROWS, COLS);
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (a[i][j] < m)
				a[i][j] *= 2;
		}
	}
	print(a, ROWS, COLS);
	deleteM(a, ROWS);

	return 0;
}