#include <iostream>
#include <string>
using namespace std;

// дана строка содержащая как минимум один символ пробела, вывести строку между первым и вторым пробелом

int main()
{
	string s, result;
	cout << "string = ";
	getline(cin, s); // для ввода всей строки, а не до пробела
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