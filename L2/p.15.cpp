#include <iostream>
using namespace std;

// найти площадь пятиугольника, состоящего из треугольников

double function(double x, double y, double z)
{
	double p = (x + y + z) / 2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}

int main()
{
	double a, b, c, d, e, f, g;
	cin >> a >> b >> c >> d >> e >> f >> g;
	cout << function(a, b, f) + function(f, c, g) + function(g, d, e);
	return 0;
}