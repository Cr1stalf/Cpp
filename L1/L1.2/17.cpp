#include <iostream>
using namespace std;

// радиус окружности, вписанной в равносторонний треугольник со стороной a

int main()
{
	int a;
	cin >> a;
	cout << (a * sqrt(3)) / 6;
	return 0;
}