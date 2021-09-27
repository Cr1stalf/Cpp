#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cin >> x >> y;
	cout << ((sin(x) + cos(y)) / (cos(x) - sin(y))) * tan(x * y);
	return 0;
}