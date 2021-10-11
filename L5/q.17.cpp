#include <iostream>
#include <string>
using namespace std;

// найти самое длинное слово в сообщении

int main()
{
	string s, result, temp;
	int k, maxk = 0;
	cout << "string = ";
	getline(cin, s);
	if (s[s.length() - 1] != ' ')
		s += ' ';
	for (int i = 0; i < s.length(); i++)
	{
		k = 0;
		temp = "";
		while (s[i] != ' ')
		{
			if (s[i] == ' ')
				break;
			k++;
			temp += s[i];
			i++;
		}
		if (maxk < k)
		{
			maxk = k;
			result = temp;
		}
	}
	cout << result;
	return 0;
}