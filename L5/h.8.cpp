#include <iostream>
using namespace std;

// в строке встречаются две одинаковые буквы, найти их (их всего две)

char test(string s)
{
	string::size_type k = 0;
	char buff;
	int count;
	while (k != string::npos)
	{
		buff = s[k];
		count = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (buff == s[i])
				count++;
		}
		k++;
		if (count == 2)
			return buff;
	}
}

int main()
{
	string s;
	cout << "string = ";
	cin >> s;

	cout << "in string " << s << " two symbols is " << test(s);
	return 0;
}