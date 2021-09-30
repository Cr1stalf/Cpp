#include <iostream>
using namespace std;

void printCards(int card)
{
	switch (card)
	{
	case 6: cout << "Шестёрка ";
		break;
	case 7: cout << "Семёрка ";
		break;
	case 8: cout << "Восьмёрка ";
		break;
	case 9: cout << "Девятка ";
		break;
	case 10: cout << "Десятка ";
		break;
	case 11: cout << "Валет ";
		break;
	case 12: cout << "Дама ";
		break;
	case 13: cout << "Король ";
		break;
	case 14: cout << "Туз ";
		break;
	}
}

void printMast(int mast)
{
	switch (mast)
	{
	case 1: cout << "Пики";
		break;
	case 2: cout << "Трефы";
		break;
	case 3: cout << "Бубны";
		break;
	case 4: cout << "Черви";
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int k, m;

k:  cout << "Введите номер карты: ";
	cin >> k;
	while (k > 14 || k < 6)
	{
		cout << "Вы ввели некорректный номер карты, необходимо ввести от 6 до 14\n";
		goto k;
	}

m:  cout << "Введите номер масти: ";
	cin >> m;
	while (m > 4 || m < 1)
	{
		cout << "Вы ввели некорректный номер масти, необходимо ввести от 1 до 4\n";
		goto m;
	}
	printCards(k);
	printMast(m);
}