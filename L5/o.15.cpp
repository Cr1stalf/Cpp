#include <iostream>
#include <string>
using namespace std;

// ���� ������ ���������� ��� ������� ���� ������ �������, ������� ������ ����� ������ � ������ ��������

int main()
{
	string s, result;
	cout << "string = ";
	getline(cin, s); // ��� ����� ���� ������, � �� �� �������
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			i++;
			while (s[i] != ' ')
			{
				result += s[i];
				i++;
			}
		}
	}
	cout << result;
	return 0;
}