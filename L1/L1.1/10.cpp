#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	cout << 1 + (x / 3) + abs(x) + ((pow(x, 3) + 4) / 2);
	return 0;
}