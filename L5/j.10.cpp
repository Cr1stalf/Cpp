#include <iostream>
#include <string>
using namespace std;

// ���� ����� ����� N1 N2 � ������ S1 S2 �������� �� ��� ����� ������ ���������� N1 �������� ����� S1 � N2 �������� ������ S2

int main()
{
	int N1, N2;
	string S1, S2, result;
	cout << "s1 = ";
	cin >> S1;
	cout << "s2 = ";
	cin >> S2;
	cout << "N1 = ";
	cin >> N1;
	cout << "N2 = ";
	cin >> N2;
	result += S1.substr(0, N1);
	result += S2.substr(S2.length() - N2, N2);
	cout << result;
	return 0;
}