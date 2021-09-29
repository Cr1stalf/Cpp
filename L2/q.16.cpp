#include <iostream>
using namespace std;

// периметр треугольника по заданным координатам его вершин

double f(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double d(double a, double b, double c)
{
	return a + b + c;
}

int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << d(f(x1, y1, x2, y2), f(x2, y2, x3, y3), f(x3, y3, x1, y1));

	return 0;
}