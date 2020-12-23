#include "my_class.h"

int main() {
	setlocale(LC_ALL, "rus");
ERROR:
	int INT;
	double DOUBLE;
	try
	{
		cout << "������� ����� �����: ";
		cin >> INT;
		if (cin.fail()) {
			throw std::exception();
		}
		cout << "������� ������������ �����: ";
		cin >> DOUBLE;
		if (cin.fail()) {
			throw std::exception();
		}
	}
	catch (const std::exception&)
	{
		cout << "������ �����!\n";
		cin.clear();
		cin.ignore(50000, '\n');
		goto ERROR;
	}
	my_class<int> INT_NUM(INT);
	my_class<double> DOUBLE_NUM(DOUBLE);
	cout << "������ ������: "; INT_NUM.INFO(); cout << endl;
	cout << "������ ������: "; DOUBLE_NUM.INFO(); cout << endl;



	cout << "��������� ������� ��� ������� ��� ����� ����� - ";
	my_class<int> INT_RESULT = INT_NUM + INT_NUM;
	INT_RESULT.INFO();

	cout << "��������� ������� ��� ������� ��� ������������ ����� - ";
	my_class<double> DOUBLE_RESULT = DOUBLE_NUM + DOUBLE_NUM;
	DOUBLE_RESULT.INFO();

	cout << "��������� ������� ��� ������� ��� ������������ � ����� ����� - ";
	my_class<double> INT_DOUBLE_RESULT = INT_NUM + DOUBLE_NUM;
	INT_DOUBLE_RESULT.INFO();
}