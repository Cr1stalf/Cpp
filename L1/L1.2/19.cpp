#include <iostream>
using namespace std;

// ����� n ������ �������������� ����������, ���� �������� a1, d, n

int main()
{
	int a1, d, n;
	cin >> a1 >> d >> n;
	cout << ((a1 + (a1 + (n - 1) * d)) / 2) * n;
	return 0;
}