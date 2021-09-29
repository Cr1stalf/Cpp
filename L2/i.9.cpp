#include <iostream>
using namespace std;

int f(int n, float x)
{
	return pow(x, n) / n;
}

int main()
{
	int x;
	cin >> x;
	cout << f(2, x) + f(4, x) + f(6, x);
	return 0;
}