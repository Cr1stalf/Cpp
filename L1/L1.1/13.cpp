#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << (pow(x, 2) + pow(y, 2)) / (1 - (pow(x, 3) - y) / (3));
	return 0;
}