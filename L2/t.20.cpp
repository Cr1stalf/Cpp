#include <iostream>
using namespace std;

// проверить, существует ли треугольник со сторонам, которые необходимо найти через вершины

double f(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

bool t(double a, double b, double c)
{

	if (a + b > c && a + c > b && c + b > a)
		return 1;
}

int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	(t(f(x1, y1, x2, y2), f(x2, y2, x3, y3), f(x1, y1, x3, y3)) == 1) ? cout << "Triangle exist" : cout << "Triangle not exist";
	return 0;
}