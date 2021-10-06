#include <iostream>
using namespace std;

// заменить все элементы массива противоположными числами

void print(int mas[], int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	print(a, 10);
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > 0)
			a[i] = -a[i];
	}
	print(a, 10);
	return 0;
}