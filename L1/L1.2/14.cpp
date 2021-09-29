#include <iostream>
#define PI 3.14
using namespace std;

// радиус через площадь s

int main()
{
	int s;
	cin >> s;
	cout << sqrt(s / PI);
	return 0;
}