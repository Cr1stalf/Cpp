#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << (abs(pow(x, 3) - pow(x, 2))) - ((7 * x)) / (pow(x, 3) - 15 * x);
	return 0;
}