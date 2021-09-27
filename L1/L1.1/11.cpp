#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << log(cos(x)) / log(1 + pow(x, 2));
	return 0;
}