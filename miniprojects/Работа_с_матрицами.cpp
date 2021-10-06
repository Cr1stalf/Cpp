#include <iostream>
//#define DEBUG
using namespace std;

double detA(double** a, int rows, int cols); // прототип detA

// программа работы с матрицами 2, 3 и 4 порядка
double** create(int rows, int cols) // функция создания массива n*n
{
	double** a = new double* [rows];
	for (int i = 0; i < cols; i++)
	{
		a[i] = new double[cols];
	}
	return a;
}
void fill(double** a, int rows, int cols) // заполнение массива
{
	cout << "Введите " << rows * cols << " элементов матрицы в ряд через пробел: ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}
}
void print(double** a, int rows, int cols)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << fixed << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void _delete(double** a, int rows, int cols) // освобождение памяти после использования массива
{
	for (int i = 0; i < rows; i++)
		delete[] a[i];
	delete[]a;
}
double M(double** a, int ii, int jj, int rows, int cols) // минор элемента ij
{
	if (rows == 2) // если матрица второго порядка
	{
		for (int i = 0; i < rows; i++)
		{
			if (i == ii) // если строка равна нужной строке, пропустить её
				continue;

			for (int j = 0; j < cols; j++)
			{
				if (j == jj) // если столбец равен нужному столбцу, пропустить его
					continue;
				return a[i][j]; // вернуть оставшийся элемент матрицы второго порядка, являющийся её минором
			}
		}
	}
	else if (rows == 3) // если матрица третьего порядка
	{
		double d, k = 0;
		double** b = create(rows - 1, cols - 1);
		for (int i = 0; i < rows; i++)
		{
			if (ii == i) // если строка равна нужной строке, пропустить её
				continue;
			for (int j = 0; j < cols; j++)
			{
				if (j == jj) // если столбец равен нужному столбцу, пропустить его
					continue;
				if (k == 3) { b[1][1] = a[i][j]; k++; } // инициализация матрицы b подходящими числами
				if (k == 2) { b[1][0] = a[i][j]; k++; } //
				if (k == 1) { b[0][1] = a[i][j]; k++; } // 
				if (k == 0) { b[0][0] = a[i][j]; k++; } //
			}
		}
		d = detA(b, rows - 1, cols - 1);
		_delete(b, rows - 1, cols - 1);
		return d;
	}
	else if (rows == 4)
	{
		double d, k = 0;
		double** b = create(rows - 1, cols - 1);
		for (int i = 0; i < rows; i++)
		{
			if (ii == i) // если строка равна нужной строке, пропустить её
				continue;
			for (int j = 0; j < cols; j++)
			{
				if (j == jj) // если столбец равен нужному столбцу, пропустить его
					continue;
				if (k == 8) { b[2][2] = a[i][j]; k++; } // инициализация матрицы b подходящими числами
				if (k == 7) { b[2][1] = a[i][j]; k++; } // 
				if (k == 6) { b[2][0] = a[i][j]; k++; } //
				if (k == 5) { b[1][2] = a[i][j]; k++; } // 
				if (k == 4) { b[1][1] = a[i][j]; k++; } //
				if (k == 3) { b[1][0] = a[i][j]; k++; } // 
				if (k == 2) { b[0][2] = a[i][j]; k++; } //
				if (k == 1) { b[0][1] = a[i][j]; k++; } // 
				if (k == 0) { b[0][0] = a[i][j]; k++; } //
			}
		}
		d = detA(b, rows - 1, cols - 1);
		_delete(b, rows - 1, cols - 1);
		return d;

	}
	else
	{
		cout << "error"; //
	}
}
double detA(double** a, int rows, int cols) // функция вычисления определителя для матрицы A
{
	if (rows == 2)
	{
		return (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
	}
	else if (rows == 3)
	{
		return (a[0][0] * a[1][1] * a[2][2] + a[1][0] * a[2][1] * a[0][2] + a[0][1] * a[1][2] * a[2][0]) - (a[0][2] * a[1][1] * a[2][0] + a[0][1] * a[1][0] * a[2][2] + a[1][2] * a[2][1] * a[0][0]);
	}
	else if (rows == 4)
	{
		double d;
		for (int i = 0; i < 1; i++)
		{
			d = 0;
			for (int j = 0; j < cols; j++)
			{
				d += pow((-1), (i + j)) * a[i][j] * M(a, i, j, rows, cols);
			}
		}
		return d;
	}
	else
	{
		cout << "error";
	}
	return 0; //
}
void AT(double** a, int rows, int cols) // функция "переворачивает" матрицу (транспонирование)
{
	/*Возможно можно сделать проще*/
	double** b = create(rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			a[i][j] = b[i][j];
		}
	}
	_delete(b, rows, cols);
	/*----------------------------*/

}
void ATA(double** a, int rows, int cols) // функция заполняет транспонированную матрицу алгебраическими дополнениями
{
	double** b = create(rows, cols);

	for (int i = 0; i < rows; i++) // клонируем матрицу a в матрицу b
	{
		for (int j = 0; j < cols; j++)
		{
			b[i][j] = a[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			b[i][j] = (int)(pow((-1), (i + j)) * M(a, i, j, rows, cols));
		}
	}

	for (int i = 0; i < rows; i++) // клонируем матрицу b в матрицу a
	{
		for (int j = 0; j < cols; j++)
		{
			a[i][j] = b[i][j];
		}
	}

	_delete(b, rows, cols);
}
void uNumberOnMatrix(double** a, int rows, int cols, double d) // функция умножает число на матрицу
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			a[i][j] *= (1 / d);
		}
	}
}
void reverseA(double** a, int rows, int cols, double d) // функция находит обратную матрицу к данной
{
	if (d == 0)
	{
		cout << "Определитель равен 0, решений нет" << endl;
	}
#ifdef DEBUG
	cout << "Исходная матрица:";
	print(a, rows, cols);
#endif // DEBUG
	AT(a, rows, cols);
#ifdef DEBUG
	cout << "Транспонированная матрица:";
	print(a, rows, cols);
#endif // DEBUG
	ATA(a, rows, cols);
#ifdef DEBUG
	cout << "Транспонированная матрица из алгебраических дополнений:";
	print(a, rows, cols);
	cout << "Определитель равен " << d << endl;
#endif // DEBUG
	uNumberOnMatrix(a, rows, cols, d);
}

int main()
{
	setlocale(LC_ALL, "ru"); // русский язык в консоли
	int answer = 1, n, rows, cols; // answer для повторения цикла, n - размерность квадратной матрицы
	while (answer == 1)
	{
		cout << "Введите порядок матрицы: ";
	m:cin >> n;
		switch (n)
		{
		case 2:
		{
			cout << "Порядок матрицы: 2\n"; rows = 2, cols = 2;
			double** a = create(rows, cols);
			fill(a, rows, cols);
		m1:			cout << "1. Найти определитель\n2. Найти обратную матрицы\n";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				cout << "Определитель равен " << detA(a, rows, cols) << endl;
			}
			break;
			case 2:
			{
				double d = detA(a, rows, cols);
				reverseA(a, rows, cols, d);
				cout << "Обратная матрица для введённой:";
				print(a, rows, cols);
			}
			break;
			default:
			{
				goto m1; // если ввели не то число, перейти к повторному вводу
			}
			break;
			}
			_delete(a, rows, cols);
		}
		break;
		case 3:
		{
			cout << "Порядок матрицы: 3\n"; rows = 3, cols = 3;
			double** a = create(rows, cols);
			fill(a, rows, cols);
		m2:			cout << "1. Найти определитель\n2. Найти обратную матрицу\n";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				cout << "Определитель равен " << detA(a, rows, cols) << endl;
			}
			break;
			case 2:
			{
				double d = detA(a, rows, cols);
				reverseA(a, rows, cols, d);
				cout << "Обратная матрица для введённой:";
				print(a, rows, cols);
			}
			break;
			default:
			{
				goto m2; // если ввели не то число, перейти к повторному вводу
			}
			break;
			}
			_delete(a, rows, cols);
		}
		break;
		case 4:
		{
			cout << "Порядок матрицы: 4\n"; rows = 4, cols = 4;
			double** a = create(rows, cols);
			fill(a, rows, cols);
		m3:cout << "1. Найти определитель\n2. Найти обратную матрицы\n";
			cin >> n;
			switch (n)
			{
			case 1:
			{
				cout << "Определитель равен " << fixed <<detA(a, rows, cols) << endl;
			}
			break;
			case 2:
			{
				double d = detA(a, rows, cols);
				reverseA(a, rows, cols, d);
				cout << "Обратная матрица для введённой:";
				print(a, rows, cols);
			}
			break;
			default:
				goto m3; // если ввели не то число, перейти к повторному вводу
				break;
			}
			_delete(a, rows, cols);
		}
		break;
		default:
		{
			cout << "Вы ввели не то, попробуйте 2, 3 или 4(размерность квадратной матрицы)\n";
			goto m; // если ввели не то число, перейти к повторному вводу
		}
		break;
		}
		cout << "\nПродолжить работу с матрицами? 1 - yes, 0 - no\n";
		cin >> answer;
	}


	system("pause");
}