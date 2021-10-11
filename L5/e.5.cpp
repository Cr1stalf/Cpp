#include <iostream>
using namespace std;

// удалить из строки все символы c1

int main()
{
	string s, result;
	cout << "string = ";
	cin >> s;
	char symbol;
	cout << "symbol = ";
	cin >> symbol;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == symbol)
			continue;
		else
			result += s[i];
	}
	cout << result;
	return 0;
}