#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double n, S = 0, sign = 1;
	cin >> n;
	cout << " i S\n";
	for (int i = 1; i <= n; i++)
	{
		S += cos(i) * sign;
		sign = -sign;
		cout << " " << i << " " << S << endl;
	}
}