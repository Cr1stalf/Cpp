#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double n, s = 1, x, a, k;
	cin >> n >> x >> k;
	for (int i = 1; i <= k; i++)
	{
		a = 1 + (pow(x, (2 * n + 1))) / (n * (n - 1));
		s *= a;
	}
	cout << s;

}