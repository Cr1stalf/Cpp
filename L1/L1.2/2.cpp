#include <iostream>
using namespace std;

// площадь равностороннего треугольника, периметр которого равен p

int main()
{
	int p;
	cin >> p;
	cout << (pow((p / 3), 2) * sqrt(3)) / (4);
	return 0;
}