#include <iostream>
using namespace std;

// какая из трёх точек наиболее удалена от начала координат

double f(double x1, double y1, double x2, double y2)
{
	cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double max(double a, double b)
{
	return (a > b) ? a : b;
}

double maxThree(double a, double b, double c)
{
	double t = max(b, c);
	return (a > t) ? a : t;
}

int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << maxThree(f(0, 0, x1, y1), f(0, 0, x2, y2), f(0, 0, x3, y3));

	return 0;
}