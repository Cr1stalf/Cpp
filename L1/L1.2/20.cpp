#include <iostream>
using namespace std;

// ����� n ������ �������������� ����������, ���� �������� a1, q, n

int main()
{
	int a1, q, n;
	cin >> a1 >> q >> n;
	cout << (a1 - (a1 * pow(q, (n - 1))) * q) / (1 - q);
	return 0;
}