#include <iostream>
using namespace std;

// заменить все отрицательные элементы в массиве, не кратные трЄм, противоположными им числами

int** create(int& rows, int& cols) // функци€ создани€ двумерного динамического массива rows строк и cols столбцов
{
	cout << "rows = ";
	cin >> rows; // ввод кол-ва строк
	cout << "cols = ";
	cin >> cols; // ввод кол-ва столбцов

	int** a = new int* [rows]; // объ€вление массива указателей
	for (int i = 0; i < rows; i++)
	{
		a[i] = new int[cols]; // объ€вление массива на каждый указатель
	}

	return a; // вернуть ссылку на первый элемент созданного массива
}

void print(int** mas, int rows, int cols) // функци€ вывода массива на экран
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

void f(int** mas, int rows, int cols) // функци€, мен€юща€ числа, соответствующие требовани€м, на противоположные
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

void deleteM(int** mas, int rows) // функци€ удалени€ массива
{
	for (int i = 0; i < rows; i++) // сначала дл€ каждого указател€ удалить строку
	{
		delete mas[i];
	}
	delete mas; // потом удалить массив указателей
}

int main()
{
	int ROWS, COLS;
	int** a = create(ROWS, COLS);

	for (int i = 0; i < ROWS; i++) // ввод массива с клавиатуры
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