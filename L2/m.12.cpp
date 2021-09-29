#include <iostream>
using namespace std;

void f(int x)
{
	(x / 100 == 0) ? cout << x % 10 << x / 10 : cout << x;
}

int main()
{
	int x;
	cin >> x;
	f(x);
	return 0;
}