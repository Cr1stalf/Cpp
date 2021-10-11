#include <iostream>
#include <string>
using namespace std;

// дана осмысленная строка, посчитать сколько раз заданное слово встречается в строке(другое слово не может начинаться с этого же слова)

int main()
{
	int count = 0;
	string s, word, temp;
	cout << "string = ";
	getline(cin, s);
	cout << "word = ";
	cin >> word;
	if (s[s.length() - 1] != ' ') // если оследний символ не пробел
		s += ' '; // то добавить его

	for (int i = 0; i < s.length(); i++)
	{
		temp = "";
		if (i == 0 || s[i - 1] == ' ' && s[i] == word[0])
		{
			while (s[i] != ' ' && s[i] != '\n')
			{
				temp += s[i];
				i++;
			}
			if (temp == word)
				count++;
		}
	}
	cout << count;
	return 0;
}