#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
m:  cout << "Введите номер масти: ";
	cin >> n;
	while (n > 4 || n < 1)
	{
		cout << "Вы ввели некорректный номер масти, необходимо ввести от 1 до 4\n";
		goto m;
	}

	switch (n)
	{
	case 1: cout << "Пики";
		break;
	case 2: cout << "Трефы";
		break;
	case 3: cout << "Бубны";
		break;
	case 4: cout << "Червы";
		break;
	default: cout << "Ошибка";
		break;
	}
	return 0;
}