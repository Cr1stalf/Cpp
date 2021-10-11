#include <iostream>
#include <string>
using namespace std;

// вывести все слова палиндромы в данном сообщении

int isPalindrome(string temp, int k)
{
	for (int i = 0; i < k; i++)
	{
		if (temp[i] == temp[k - 1])
			k--;
		else
			return 0;
	}
	return 1;
}

int main()
{
	string s, temp;
	int k;
	cout << "string = ";
	getline(cin, s);
	cout << "Words-palindromes:\n";
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
		if (isPalindrome(temp, k))
			cout << temp << endl;
	}
	return 0;
}