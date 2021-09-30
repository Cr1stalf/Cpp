#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
m:  cout << "Введите номер карты: ";
	cin >> n;
	while (n > 14 || n < 6)
	{
		cout << "Вы ввели некорректный номер карты, необходимо ввести от 6 до 14\n";
		goto m;
	}

	switch (n)
	{
	case 6: cout << "Шестёрка";
		break;
	case 7: cout << "Семёрка";
		break;
	case 8: cout << "Восьмёрка";
		break;
	case 9: cout << "Девятка";
		break;
	case 10: cout << "Десятка";
		break;
	case 11: cout << "Валет";
		break;
	case 12: cout << "Дама";
		break;
	case 13: cout << "Король";
		break;
	case 14: cout << "Туз";
		break;
	default: cout << "Ошибка";
		break;
	}
	return 0;
}