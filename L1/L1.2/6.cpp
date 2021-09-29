#include <iostream>
using namespace std;

// гипоетенуза по двум катетам

int main()
{
	int x, y;
	cin >> x >> y;
	cout << sqrt(pow(x, 2) + pow(y, 2));
	return 0;
}