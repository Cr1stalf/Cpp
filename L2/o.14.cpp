#include <iostream>
using namespace std;

double f(double a, double b)
{
	return sqrt(pow(a, 2) + pow(b, 2));
}

int main()
{
	double AB, AC, DC;
	cin >> AB >> AC >> DC;
	cout << AB + AC + DC + (sqrt(pow(f(AB, AC), 2) - pow(DC, 2)));

	return 0;
}