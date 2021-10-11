#include <iostream>
using namespace std;

// удвоить каждое вхождение заданной буквы в строке

int main()
{
	string s, result;
	cout << "string = ";
	cin >> s;
	char buff;
	cout << "symbol = ";
	cin >> buff;
	for (int i = 0; i < s.length(); i++)
	{
		if (buff == s[i])
		{
			result += s[i];
			result += buff;
		}
		else
		{
			result += s[i];
		}

	}
	cout << result;
	return 0;
}