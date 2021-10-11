#include <iostream>
#include <string>
using namespace std;

// найти самое короткое слово в сообщении

int main()
{
	int k, min = 999;
	string s, temp, result;
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
			k++;
			temp += s[i];
			i++;
		}
		if (min > k)
		{
			min = k;
			result = temp;
		}
	}
	cout << result;
	return 0;
}