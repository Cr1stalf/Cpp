#include <iostream>
#define PI 3.14
using namespace std;

// ������� ������ � ���������� �������� r1 � ������� r2

int main()
{
	int r1, r2;
	cin >> r1 >> r2;
	cout << PI * (r2 * r2 - r1 * r1);
	return 0;
}