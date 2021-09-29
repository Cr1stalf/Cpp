#include <iostream>
using namespace std;

int min(int a, int b)
{
	return (a < b) ? a : b;
}

int main()
{
	int x, y, z, v;
	cin >> x >> y >> z >> v;
	cout << min(min(x, y), min(z, v));
	return 0;
}