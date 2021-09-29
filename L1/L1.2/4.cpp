#include <iostream>
using namespace std;

// среднее арифметическое кубов двух данных чисел

int main()
{
	int x, y;
	cin >> x >> y;
	cout << (pow(x, 3) + pow(y, 3)) / (2);
	return 0;
}