#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double n, s = 0, x, a, k;
	cin >> n >> x >> k;
	for (int i = 1; i <= k; i++)
	{
		a = (pow((-1), n) * pow(x, n)) / (pow(2, n) * 7 * n);
		s += a;
	}
	cout << s;

}