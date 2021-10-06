#include <iostream>
using namespace std;

// �������� ��� ������������� �������� � �������, �� ������� ���, ���������������� �� �������

int** create(int& rows, int& cols) // ������� �������� ���������� ������������� ������� rows ����� � cols ��������
{
	cout << "rows = ";
	cin >> rows; // ���� ���-�� �����
	cout << "cols = ";
	cin >> cols; // ���� ���-�� ��������

	int** a = new int* [rows]; // ���������� ������� ����������
	for (int i = 0; i < rows; i++)
	{
		a[i] = new int[cols]; // ���������� ������� �� ������ ���������
	}

	return a; // ������� ������ �� ������ ������� ���������� �������
}

void print(int** mas, int rows, int cols) // ������� ������ ������� �� �����
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

void f(int** mas, int rows, int cols) // �������, �������� �����, ��������������� �����������, �� ���������������
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (mas[i][j] % 3 != 0 && mas[i][j] < 0)
			{
				mas[i][j] = -mas[i][j];
			}
		}
	}
}

void deleteM(int** mas, int rows) // ������� �������� �������
{
	for (int i = 0; i < rows; i++) // ������� ��� ������� ��������� ������� ������
	{
		delete mas[i];
	}
	delete mas; // ����� ������� ������ ����������
}

int main()
{
	int ROWS, COLS;
	int** a = create(ROWS, COLS);

	for (int i = 0; i < ROWS; i++) // ���� ������� � ����������
	{
		for (int j = 0; j < COLS; j++)
		{
			cin >> a[i][j];
		}
	}
	print(a, ROWS, COLS);
	f(a, ROWS, COLS);
	print(a, ROWS, COLS);
	deleteM(a, ROWS);


	return 0;
}