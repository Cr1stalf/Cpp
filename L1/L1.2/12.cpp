#include <iostream>
using namespace std;

// площадь треугольника, заданного координатами вершин x1, y1, x2, y2, x3, y3

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << abs(0.5 * (((x1 - x3) * (y2 - y3)) - (y1 - y3) * (x2 - x3)));
	return 0;
}