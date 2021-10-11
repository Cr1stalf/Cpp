#include <iostream>
#include <string>
using namespace std;

//  вывести на экран все слова состоящие из n букв
int main()
{
	string s, temp;
	int k, n;
	cout << "string = ";
	getline(cin, s);
	cout << "n = ";
	cin >> n;
	if (s[s.length() - 1] != ' ')
		s += ' ';
	for (int i = 0; i < s.length(); i++)
	{
		k = 0;
		temp = "";
		while (s[i] != ' ')
		{
			temp += s[i];
			k++;
			i++;
		}
		if (k == n)
			cout << temp << endl;
	}
	return 0;
}