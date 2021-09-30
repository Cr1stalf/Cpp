#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, S = 0;
	cin >> n;
	cout << " i " << "S\n";
	for (int i = 1; i <= n; i++)
	{
		S += pow(i, 2);
		cout << " " << i << " " << S << endl;
	}
}