#include <iostream>
using namespace std;

// ��������, �������� �� ������������ ��������� ������� ���������� ������

int** create(int& rows, int& cols) // ������� ��������� ������ ��� ������ ������������ rows * cols
{
	cout << "rows = ";
	cin >> rows;
	cout << "cols = ";
	cin >> cols;
	cout << "Print array on " << rows * cols << " elements" << endl;
	int** a = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		a[i] = new int[cols];
	}

	return a;
}

void print(int** a, int rows, int cols) // ����� ������� ������� �� �����
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void fill(int** a, int rows, int cols) // ���� � ����������
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
}

void deleteA(int** a, int rows) // ������������ ������ �������
{
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;
}

void f(int** a, int rows, int cols)
{
	int p = 1;
	for (int i = 0; i < rows; i++) // ���������� ������������ �������
	{
		for (int j = 0; j < cols; j++)
		{
			p *= a[i][j];
		}
	}
	cout << "\nProduct is " << p << endl;
	if (p >= 100 && p < 1000) // ���� ������������ - ���������� �����
		cout << "Array product is three digit number\n";
	else
		cout << "No\n";
}

int main()
{
	int rows, cols, v = 1;
	cout << "Function difining product of elements is an a three digit number\n";
a:/*������*/	int** a = create(rows, cols);
	fill(a, rows, cols);
	print(a, rows, cols);
	f(a, rows, cols);
	deleteA(a, rows);
	cout << "One more array to check?\n1 - yes\t0 - no\n";
	cin >> v;
	if (v == 1)
		goto a; // ���� user ��� 1 - ������ � ������

	return 0;
}