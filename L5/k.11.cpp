#include <iostream>
#include <string>
using namespace std;

// даны строки S0, S1 и символ C, перед каждого вхождения символа С вставить строку S1

int main()
{
	string S0, S1, result;
	char C;
	cout << "S0 = ";
	cin >> S0;
	cout << "S1 = ";
	cin >> S1;
	cout << "C = ";
	cin >> C;
	result = S0[0];
	for (int i = 0; i < S0.length(); i++)
	{
		if (S0[i + 1] == C)
		{
			result += S1;
			result += S0[i + 1];
		}
		else
		{
			result += S0[i + 1];
		}
	}
	cout << result;
	return 0;
}