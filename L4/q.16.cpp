#include <iostream>
using namespace std;

// find count of pairs neighbor elements, difference between which equal b
int diff(int a, int b)
{
	return abs(a - b);
}
int main()
{
	int a[10], b, k = 0;
	cout << "b = ";
	cin >> b;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (diff(a[i], a[i + 1]) == b)
			k++;
	}
	cout << k;
	return 0;
}