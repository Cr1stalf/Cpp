#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double n, s = 0, x, a = 1;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
	{
		a *= sin(x);
		s += a;
	}
	cout << s;
}