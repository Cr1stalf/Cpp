#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int m, n;
	cin >> m;
m:  cout << "Введите порядковый номер дня месяца: ";
	cin >> n;
	while (n > 31)
		goto m;

	switch (m)
	{
	case 1: cout << "Январь, " << 31 - n << " дней осталось";
		break;
	case 2: cout << "Февраль, " << 28 - n << " дней осталось";
		break;
	case 3: cout << "Март, " << 31 - n << " дней осталось";
		break;
	case 4: cout << "Апрель, " << 30 - n << " дней осталось";
		break;
	case 5: cout << "Май, " << 31 - n << " дней осталось";
		break;
	case 6: cout << "Июнь, " << 30 - n << " дней осталось";
		break;
	case 7: cout << "Июль, " << 31 - n << " дней осталось";
		break;
	case 8: cout << "Август, " << 31 - n << " дней осталось";
		break;
	case 9: cout << "Сентябрь, " << 30 - n << " дней осталось";
		break;
	case 10: cout << "Октябрь, " << 31 - n << " дней осталось";
		break;
	case 11: cout << "Ноябрь, " << 30 - n << " дней осталось";
		break;
	case 12: cout << "Декабрь, " << 31 - n << " дней осталось";
		break;
	default: cout << "Ошибка";
		break;
	}
	return 0;
}