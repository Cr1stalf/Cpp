#include <iostream>
using namespace std;

// заменить все вхождения str1 на str2

int main()
{
	string s, result, str1, str2;
	cout << "string = ";
	cin >> s;
	cout << "str1 = ";
	cin >> str1;
	cout << "str2 = ";
	cin >> str2;

	for (int i = 0; i < s.length(); i++)
	{
		if (s.substr(i, str1.length()) == str1)
		{
			result += str2;
			i += (str1.length() - 1);
		}
		else
			result += s[i];
	}
	cout << result;
	return 0;
}