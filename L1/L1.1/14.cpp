#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << ((1 + pow(sin(x + y), 2)) / (2 + abs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2))))) + x;
	return 0;
}