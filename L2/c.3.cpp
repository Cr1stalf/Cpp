#include <iostream>
using namespace std;

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << max(x, 2 * y - x) + max(5 * x + 3 * y, y);
	return 0;
}