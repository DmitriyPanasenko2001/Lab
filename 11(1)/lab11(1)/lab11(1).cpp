#include"lab11.h"
#define N 3

int main(void) {
	setlocale(LC_ALL, "ru");
	string n;
	char t;
	unsigned int s;
	float h;
	short i;

	Teams obj[N];
	system("cls");
	cout << "Работа функции SET!\n";
	for (i = 0; i < N; i++)
	{
		cout << "Ведомость спортивних состязаний\n";
		cout << "Фамилия участника,  Код команды, Количество балов,  Место в итоге: ";
		cin >> n;
		cin >> t;
		cin >> s;
		cin >> h;


		obj[i].set(n, t, s, h);
	}
	cout << "Работа функции SHOW!\n";
	cout << "Ведомость спортивних состязаний\n";
	cout << "Фамилия участника,  Код команды, Количество балов,  Место в итоге: ";
	for (i = 0; i < N; i++)
	{
		obj[i].show();
		cout << "\n";
	}
	cout << "Работа функции GET и SHOW!\n";
	cout << "Ведомость спортивних состязаний\n";
	cout << "Фамилия участника,  Код команды, Количество балов,  Место в итоге: ";
	for (i = 0; i < N; i++)
	{
		obj[i].get(n, t, s, h);
		obj[i].show();
		cout << "\n";
	}
	_getch();
	return 0;
}