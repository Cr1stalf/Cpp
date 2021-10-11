#include <iostream>
#include <string>
using namespace std;

// даны строки S и S0, найти количество  вхождений в строки S0 в S

int main()
{
	string S, S0;
	int count = 0;
	cout << "S = ";
	cin >> S;
	cout << "S0 = ";
	cin >> S0;
	for (int i = 0; i < S.length(); i++)
	{
		if (S.substr(i, S0.length()) == S0)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}