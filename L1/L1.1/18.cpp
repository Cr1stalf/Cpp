#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << 2 * ((cos(3 * x)) / (sin(3 * x))) - (1) / (12 * pow(x, 2) + 7 * x - 5);
	return 0;
}