#include <iostream>
using namespace std;

// swap max and min on array

int main()
{
	int a[10], min = 999, max = 0, iM, im, t;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++) // print on screen
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			im = i;
		}

		if (a[i] > max)
		{
			max = a[i];
			iM = i;
		}
	}
	t = a[im];
	a[im] = a[iM];
	a[iM] = t;

	for (int i = 0; i < 10; i++) // print on screen
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}