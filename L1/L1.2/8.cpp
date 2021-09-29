#include <iostream>
using namespace std;

// периметр прямоугольного треугольника по двум катетам

int main()
{
	int x, y;
	cin >> x >> y;
	cout << sqrt(pow(x, 2) + pow(y, 2)) + x + y;
	return 0;
}