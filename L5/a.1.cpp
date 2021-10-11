#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string s, c1 = "/";
	char c2 = 'l';
	cout << "string = ";
	cin >> s;
	string result;
	for (int i = 0; i < s.length(); i++)
	{
		result += s[i];
		if (s[i] == c2)
			result += c1;
	}
	cout << "Результат:" << result;



	return 0;
}