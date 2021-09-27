#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << exp(-x) - cos(x) + sin(2 * x * y);
	return 0;
}