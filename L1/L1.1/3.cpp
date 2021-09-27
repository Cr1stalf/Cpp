#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	cout << sqrt(pow(x, 4) + sqrt(abs(x + 1)));
	return 0;
}