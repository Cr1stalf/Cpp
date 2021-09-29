#include <iostream>
using namespace std;

// среднее геометрическре модулей двух данных чисел

int main()
{
	int x, y;
	cin >> x >> y;
	cout << sqrt(abs(x) * abs(y));
	return 0;
}