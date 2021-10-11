#include <iostream>
#include <string>
using namespace std;

// вывести только те слова, которые наччинаются и окначиваются на одну и ту же букву

int main()
{
	string s, temp;
	int k;
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
			temp += s[i];
			i++;
			k++;
		}
		if (temp[0] == temp[k - 1])
			cout << temp << endl;
	}
	return 0;
}