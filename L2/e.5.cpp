#include <iostream>
using namespace std;

int f(int x)
{
	return cos(2 * x) + sin(x - 3);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << f(a) << " " << f(b);
	cout << "\nMin value in ";
	(f(a) < f(b)) ? cout << "a" : cout << "b";
	return 0;
}