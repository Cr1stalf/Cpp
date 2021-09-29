#include <iostream>
using namespace std;

int f(int x)
{
	return (x % 2 == 0) ? x / 2 : 0;
}

int main()
{
	int x;
	cin >> x;
	cout << f(x);
	return 0;
}