#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << ((cos(x)) / (PI - 2 * x)) + 16 * x * cos(x * y);
	return 0;
}