#include <iostream>
using namespace std;

int f(int x)
{
	return pow(x, 3) - sin(x);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << f(a) << " " << f(b);
	cout << "\nMax value in ";
	(f(a) > f(b)) ? cout << "a" : cout << "b";
	return 0;
}