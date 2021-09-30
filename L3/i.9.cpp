#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A, B, X;
	cin >> A >> B >> X;
	for (A; A <= B; A++)
	{
		if (A % 10 == X)
			cout << A << endl;
	}

}