#include "header.h"


sportsman::sportsman(std::string Surname, std::string code, int mesto, double mark) {
    this->Surname = Surname;
    this->code = code;
    this->mesto = mesto;
    this->mark = mark;
}
BASE::BASE(std::string name) {
    this->title_DATA_BASE = name;
    this->col = 0;
    this->sorted = 0;
}
BASE::~BASE() {
    for (int i = 0; i < this->col; i++) {
        delete this->sportsmans[i];
    }
}
std::istream& operator>> (std::istream& in, sportsman& temp) {
    cout << "!!!���� ��������!!!\n"; cout << "�������: "; in >> temp.Surname; cout << "��� �������: "; in >> temp.code;
    cout << "���������� ������: "; in >> temp.mark; cout << "����� � �����: "; in >> temp.mesto; cout << endl; return in;
}
std::ostream& operator<< (std::ostream& out, const sportsman& temp) {
    return out << temp.Surname << "    " << temp.code << "    " << temp.mesto << "    " << temp.mark << "\n";
}
sportsman sportsman::operator=(const sportsman& temp) {
    sportsman result;
    result.set(temp.Surname, temp.code, temp.mesto, temp.mark);
    return result;
}
bool sportsman::operator==(const sportsman& temp) {
    if (this->Surname == temp.Surname && this->code == temp.code && this->mesto == temp.mesto && this->mark == temp.mark)
        return true;
    else
        return false;
}
std::string sportsman::name() {
    return this->Surname;
}
void sportsman::get(std::string* Surname, std::string* code, int* mesto, double* mark) {
    *Surname = this->Surname;
    *code = this->code;
    *mesto = this->mesto;
    *mark = this->mark;
}
void sportsman::set(std::string Surname, std::string code, int mesto, double mark) {
    this->Surname = Surname;
    this->code = code;
    this->mesto = mesto;
    this->mark = mark;
}
void sportsman::show(void) {
    cout << "�������: " << this->Surname << ". ��� �������: " << this->code << ". ���������� ������: " << this->mark << ". ����� � �����: " << this->mesto << endl;
}
sportsman sportsman::operator+(const sportsman& temp) {
    sportsman result;
    result.set(this->Surname + temp.Surname, this->code + temp.code, this->mesto + temp.mesto, this->mark + temp.mark);
    return result;
}
void BASE::insert(std::string Surname, std::string code,  double mark, int mesto) {
    if (this->col > 11) {
        cout << "\nERROR: \"���� ������ ���������\"\n\n";
        return;
    }
    this->sportsmans[col] = new sportsman(Surname, code, mesto, mark);
    col++;
    this->sorted = 0;
    cout << "\n--- ������ ������� ��������� ---\n\n";
}
void BASE::pop() {
    if (this->col == 0) {
        cout << "\nERROR: \"���� ������ �����\"\n\n";
        return;
    }
    delete this->sportsmans[col - 1];
    col--;
    cout << "\n--- ������ ������� ������� ---\n\n";
}
void BASE::view(void) {
    if (this->col == 0) {
        cout << "\n� ���� ��� ���������\n\n";
        return;
    }

    table();

    for (int i = 0; i < col; i++) {
        cout << *(sportsmans[i]);
    }
    cout << "\n\n";
}
void BASE::sort() {
    if (this->col == 0) {
        cout << "\nERROR: \"���� ������ �����\"\n\n";
        return;
    }
    if (this->sorted == 1) {
        cout << "\nERROR: \"���� ������ ��� �������������\"\n\n";
        return;
    }
    for (int i = 0; i < col - 1; i++) {
        for (int i = 0; i < col - 1; i++) {
            if (BASE::SORT_FUNC(this->sportsmans[i]->name(), this->sportsmans[i + 1]->name())) {
                sportsman* temp = this->sportsmans[i];
                this->sportsmans[i] = this->sportsmans[i + 1];
                this->sportsmans[i + 1] = temp;
            }
        }

    }
    this->sorted = 1;
    cout << "\n���� ������ ������� �������������\n\n";
}
bool BASE::SORT_FUNC(std::string s1, std::string s2) {
    if (s1 > s2)
        return true;
    return false;
}