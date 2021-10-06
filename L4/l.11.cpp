#include <iostream>
using namespace std;

// вы€снить, €вл€етс€ ли произведение элементов массива трЄхзначным числом

int** create(int& rows, int& cols) // функци€ выделени€ пам€ти под массив размерностью rows * cols
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

void print(int** a, int rows, int cols) // вывод данного массива на экран
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
void fill(int** a, int rows, int cols) // ввод с клавиатуры
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
}

void deleteA(int** a, int rows) // освобождение пам€ти массива
{
	for (int i = 0; i < rows; i++)
		delete a[i];
	delete a;
}

void f(int** a, int rows, int cols)
{
	int p = 1;
	for (int i = 0; i < rows; i++) // вычисление произведени€ массива
	{
		for (int j = 0; j < cols; j++)
		{
			p *= a[i][j];
		}
	}
	cout << "\nProduct is " << p << endl;
	if (p >= 100 && p < 1000) // если произведение - трЄхзначное число
		cout << "Array product is three digit number\n";
	else
		cout << "No\n";
}

int main()
{
	int rows, cols, v = 1;
	cout << "Function difining product of elements is an a three digit number\n";
a:/*начало*/	int** a = create(rows, cols);
	fill(a, rows, cols);
	print(a, rows, cols);
	f(a, rows, cols);
	deleteA(a, rows);
	cout << "One more array to check?\n1 - yes\t0 - no\n";
	cin >> v;
	if (v == 1)
		goto a; // если user ввЄл 1 - начать с начала

	return 0;
}