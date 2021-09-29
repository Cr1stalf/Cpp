#include <iostream>
using namespace std;

double i = 1;
// 

double f(double x1, double y1, double x2, double y2)
{
	cout << ::i << ": " << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) << endl;
	::i++;
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double min(double a, double b)
{
	return (a < b) ? a : b;
}

double minThree(double a, double b, double c)
{
	double t = min(b, c);
	return (a < t) ? a : t;
}

int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << minThree(f(x1, y1, x2, y2), f(x2, y2, x3, y3), f(x3, y3, x1, y1));
	return 0;
}