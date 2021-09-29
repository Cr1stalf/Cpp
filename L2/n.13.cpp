#include <iostream>
using namespace std;

void f(int x)
{
	(x / 1000 == 0) ? cout << x % 10 << x / 10 % 10 << x / 100 : cout << x;
}

int main()
{
	int x;
	cin >> x;
	f(x);
	return 0;
}