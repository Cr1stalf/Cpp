#include <iostream>
#include <iomanip>
using namespace std;

// расстояние между точками с координатами a, b и c, d

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << setprecision(15) << sqrt(pow((a - c), 2) + pow((b - d), 2));
	return 0;
}