#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << sin(sqrt(x + 1)) - sin(sqrt(x - 1));
	return 0;
}