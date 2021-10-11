#include <iostream>
#include <string>
using namespace std;

//  подсчитать количество слов в сообщении
int main()
{
	string s;
	int k = 0;
	cout << "string = ";
	getline(cin, s);
	if (s[s.length() - 1] != ' ')
		s += ' ';
	for (int i = 0; i < s.length(); i++)
	{
		while (s[i] != ' ')
		{
			i++;
		}
		k++;
	}
	cout << k;
	return 0;
}