#include <iostream>
using namespace std;

// посчитать сумму элементов кратных 9

int main()
{
	int a[5], k = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	for (int i = 0; i < 5; i++)
	{
		if (a[i] % 9 == 0)
			k++;
	}
	cout << endl << k;
	return 0;
}