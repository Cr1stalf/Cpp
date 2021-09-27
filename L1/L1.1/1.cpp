#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	cout << 10 * sin(x) + abs(pow(x, 4) - pow(x, 5));
	return 0;
}