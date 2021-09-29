#include <iostream>
using namespace std;

int f(int x)
{
	return (x % 5 == 0) ? x / 5 : x + 1;
}

int main()
{
	int x;
	cin >> x;
	cout << f(x);
	return 0;
}