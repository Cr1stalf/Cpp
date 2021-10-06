#include <iostream>
using namespace std;

// подсчитать количество элементов, не попадающих в заданный интервал

int main()
{
	int a[10];
	int c, b, k = 0;

	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = b; j <= c; j++)
		{
			if (a[i] == j)
				k++;
		}
	}
	cout << endl << 10 - k;
	return 0;
}