#include "header.h"

#include <map>
int main() {
	setlocale(LC_ALL, "ru");


	NAME n_1("Kolya"); NUMBER n_2("+380950085623"); NAME p_1("Vasya"); NUMBER p_2("+380954085623"); NAME z_1("Vera");
	NUMBER z_2("+380954085623"); NAME c_1("Alexei"); NUMBER c_2("+380654085623");NAME o_1("Kostya");NUMBER o_2("+38066612121");
	std::cout << "��������� ����:\n";
	map<NAME, NUMBER> MyBook = { {n_1,n_2},{p_1,p_2},{z_1,z_2},{c_1,c_2}, {o_1, o_2 } };
	for (auto it = MyBook.begin(); it != MyBook.end(); it++) {
		((NAME)it->first).show();
		((NUMBER)it->second).show();
		std::cout << endl;
	}
	map<NAME, NUMBER> ::iterator f_search, iteration;


	while ('s' == 's') {
	ERROR:
		int otven;
		std::cout << "1) �����\n2) �����.\n3) ����� �� ������ �����\n4) �������� �� ������ �����.\n0) Exit.\n ";
		try
		{
			std::cin >> otven;
			if (cin.fail()) {
				cout << "ERROR\n";
				throw exception();
			}
		}
		catch (const std::exception&)
		{
			cin.clear();
			cin.ignore(3999, '\n');
			goto ERROR;
		}

		string names; char bukv;
		switch (otven)
		{
		case 0:
			std::exit(1);
			break;
		case 1:
			for (auto it = MyBook.begin(); it != MyBook.end(); it++)
			{
				((NAME)it->first).show();
				((NUMBER)it->second).show();
				cout << std::endl;

			}
			break;
		case 2:
			std::cout << "���: ";
			std::cin >> names;
			f_search = MyBook.find(names);
			if (f_search == MyBook.end())
				std::cout << "������ ����� ��� � �������.\n";
			else {
				std::cout << "�������� ������:\n ";
				((NAME)f_search->first).show();
				((NUMBER)f_search->second).show();
				std::cout << endl;
			}
			break;
		case 3:
			std::cout << "������� ����� �� ������� ������ ����� �����: >>>";
			std::cin >> bukv;
			for (auto it = MyBook.begin(); it != MyBook.end(); it++)
			{
				if (((NAME)it->first).get()[0] == bukv) {
					((NAME)it->first).show();
					((NUMBER)it->second).show();
					std::cout << endl;
				}
			}
			break;
		case 4:
			std::cout << "������� �����: >>>";
			std::cin >> bukv;
			std::cout << "��������� ����:\n";
			for (auto it = MyBook.begin(); it != MyBook.end(); it++)
			{
				if (((NAME)it->first).get()[0] == bukv) {
					std::cout << "������: ";
					((NAME)it->first).show();
					((NUMBER)it->second).show();
					MyBook.erase(it);
					it = MyBook.begin();
					std::cout << endl;
				}
			}
			break;
		default:
			std::cout << "Error!\n";
			std::exit(-1);
			break;
		}

	}


	return 1;
}