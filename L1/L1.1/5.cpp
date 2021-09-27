#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << (0.125 * x + abs(sin(x))) / (1.5 * pow(x, 2) + cos(x));
	return 0;
}