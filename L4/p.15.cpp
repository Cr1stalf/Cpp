#include <iostream>
using namespace std;

// find sum of elements located between max and min elements

int main()
{
	int a[9], max = 0, min = 999, im, iM, s = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			iM = i;
		}
		if (min > a[i])
		{
			min = a[i];
			im = i;
		}
	}

	if (im < iM)
	{
		for (int i = im + 1; i < iM; i++)
		{
			s += a[i];
		}
		cout << s;
	}
	else
		cout << "Max element after min";

	return 0;
}