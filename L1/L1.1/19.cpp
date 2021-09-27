#include <iostream>
using namespace std;

int main()
{
	double x, y, z;
	cin >> x >> y >> z;
	cout << ((y + sqrt(pow(y, 2) + 4 * x * z)) / (2 * x)) - pow(x, 3) + pow(y, -2);
	return 0;
}