#include <iostream>
using namespace std;

int f(int x)
{
	return x % 10;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << f(a) + f(b);
	return 0;
}