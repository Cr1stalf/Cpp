#include <iostream>
using namespace std;

int f(int n)
{
	return sqrt(n) + n;
}

int main()
{
	cout << f(6) / 2 + f(13) / 2 + f(21) / 2;
	return 0;
}