#include <iostream>
using namespace std;

// удалить из строки все подстроки str1

int main()
{
	string s, result, str1;
	cout << "string = ";
	cin >> s;
	cout << "substr = ";
	cin >> str1;

	for (int i = 0; i < s.length(); i++)
	{
		if (s.substr(i, str1.length()) == str1)
		{
			i += (str1.length() - 1);
			continue;
		}
		else
			result += s[i];
	}
	cout << result;
	return 0;
}