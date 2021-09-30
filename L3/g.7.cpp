#include <iostream>
using namespace std;

// Пользователь вводит два числа и арифметическую операцию, вывести ответ

int main()
{
	setlocale(LC_ALL, "ru");
	char m;
	int a, b;
	cin >> a >> b >> m;

	switch (m)
	{
	case '+': cout << a + b;
		break;
	case '-': cout << a - b;
		break;
	case '*': cout << a * b;
		break;
	case '/': cout << a / b;
		break;
	case '%': cout << a % b;
		break;

	}
}