#include <iostream>
using namespace std;

// print on screen index of all number except max

int main()
{
	int a[5], iM, max = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			iM = i;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (i == iM)
			continue;
		cout << a[i] << " ";
	}
	return 0;
}