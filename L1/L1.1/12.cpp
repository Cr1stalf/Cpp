#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << (1 + sin(sqrt(x + 1))) / (cos(12 * y - 4));
	return 0;
}