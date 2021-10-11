#include <iostream>
#include <string>
using namespace std;

// вывести только те слов, который встречаются в сообщении рвно один раз

int check(string s, string temp)
{
	int count = 0;
	string tmp;
	for (int i = 0; i < s.length(); i++)
	{
		tmp = "";
		while (s[i] != ' ')
		{
			tmp += s[i];
			i++;
		}
		if (temp == tmp)
			count++;
	}
	return count;
}

int main()
{
	string s, temp;
	cout << "string = ";
	getline(cin, s);
	if (s[s.length() - 1] != ' ')
		s += ' ';
	for (int i = 0; i < s.length(); i++)
	{
		temp = "";
		while (s[i] != ' ')
		{
			temp += s[i];
			i++;
		}
		if (check(s, temp) == 1)
			cout << temp << endl;
	}
	return 0;
}