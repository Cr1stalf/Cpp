#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, str1, str2;
	string::size_type k = 0, pos = 0;
	cin >> s >> str1 >> str2;
	k = s.find(str1, pos);
	while (k != string::npos)
	{
		s.insert(k + str1.length(), str2);
		pos = k + (str2.length() + (str1.length() - 1));
		k = s.find(str1, pos);
	}
	cout << s;
	return 0;
}