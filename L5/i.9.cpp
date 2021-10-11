#include <iostream>
#include <string>
using namespace std;

// дана строка, посчитать количество в ней прописных латинских букв

int main()
{
	string s;
	cout << "string = ";
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (islower(s[i]))
			count++;
	}
	cout << count;
	return 0;
}