#include <iostream>
using namespace std;

// ������� �������������� �������� � ����������� a � b � ����� alpha ��� ������� ���������

int main()
{
	int a, b;
	cin >> a >> b;
	cout << 0.5 * (pow(b, 2) - pow(a, 2)) * tan(a);
	return 0;
}