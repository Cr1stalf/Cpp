#include <iostream>
using namespace std;

// периметр треугольника, заданного координатами вершин x1, y1, x2, y2, x3, y3

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) + sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2)) + sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return 0;
}