#include <iostream>
using namespace std;

// площадь равнобедренной трапеции с основаниями a и b и углом alpha при большем основании

int main()
{
	int a, b;
	cin >> a >> b;
	cout << 0.5 * (pow(b, 2) - pow(a, 2)) * tan(a);
	return 0;
}