#include <iostream>
using namespace std;

int f(int x)
{
	return x / 10 % 10;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << f(a) + f(b) - f(c);
	return 0;
}