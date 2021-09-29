#include <iostream>
using namespace std;

int min(int a, int b)
{
	return (a < b) ? a : b;
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << min(3 * x, 2 * y) + min(x - y, x + y);
	return 0;
}