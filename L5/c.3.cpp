#include <iostream>
using namespace std;

// ���� �� � ������ ��� ���������� ������������� �������

int main()
{
	string s;
	cin >> s;
	char buff;

	for (int i = 1; i < s.length(); i++)
	{
		buff = s[i - 1];
		if (buff == s[i])
		{
			cout << "Yes, " << buff;
			break;
		}

	}
	return 0;
}