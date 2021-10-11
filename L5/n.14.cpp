#include <iostream>
#include <string>
using namespace std;

// даны строки S и S0, удалить все вхождения строки S0 в S

int main()
{
	string S, S0, result;
	cout << "S = ";
	cin >> S;
	cout << "S0 = ";
	cin >> S0;
	for (int i = 0; i < S.length(); i++)
	{
		if (S.substr(i, S0.length()) == S0)
		{
			i += S0.length() - 1;
			continue;
		}
		else
		{
			result += S[i];
		}
	}
	cout << result;
	return 0;
}