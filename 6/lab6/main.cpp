
#include "header.h"
#include <limits>


int main() {
    setlocale(LC_ALL, "ru");
    int birth_year, discharge, year_count;
    string FIO;
    sportsman my_sportsmans[5];
    for (int i = 0; i < SIZE; i++) {
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
        cout << "������� ���:";
        getline(cin, FIO, '\n');
        cout << "������� ��� ��������:";
        cin >> birth_year;
        cout << "������� ������:";
        cin >> discharge;
        cout << "������� ���������� ��� � ������:";
        cin >> year_count;
        my_sportsmans[i].redo(FIO, birth_year,  discharge, year_count);
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    SHOW_ALL_ELEMENTS(my_sportsmans);

}