#include <iostream>
#include <string>
using namespace std;

// вывести только те слова, которые начинаются с буквы n
int main()
{
	string s, temp;
	char n;
	cout << "string = ";
	getline(cin, s);
	cout << "Letter = ";
	cin >> n;
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
		if (temp[0] == n)
			cout << temp << endl;
	}

	return 0;
}