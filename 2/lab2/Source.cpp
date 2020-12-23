#include "header.h"
void table() {
    cout << "____________________________________________________________\n";
    cout << "| Фамилия | Код команды  | Количетво баллов | Место в итоге|\n";
}
bool cheak_index(int INDEX) {
    if (INDEX < 0 || INDEX >= SIZE)
        return false;
    else
        return true;
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
    cout << "Фамилия: " << this->Surname << ". Код команды: " << this->code << ". Количетсво баллов: " << this->mark << ". Место в итоге: " << this->mesto << endl;
}
std::istream& operator>> (std::istream& in, sportsman& temp) {
    cout << "!!!ВВОД ЕЛЕМЕНТА!!!\n"; cout << "Фамилия: "; in >> temp.Surname; cout << "Код команды: "; in >> temp.code;
    cout << "Количетсво баллов: "; in >>  temp.mark; cout << "Место в итоге: "; in >> temp.mesto; cout << endl; return in;
}
std::ostream& operator<< (std::ostream& out, const sportsman& temp) { return out << temp.Surname << " " << temp.code << " " << temp.mesto << " " << temp.mark; }
sportsman sportsman::operator=(const sportsman& temp) {
    sportsman result;
    result.set(temp.Surname, temp.code, temp.mesto, temp.mark); return result;
}
bool sportsman::operator==(const sportsman& temp) {
    if (this->Surname == temp.Surname && this->code == temp.code && this->mesto == temp.mesto && this->mark == temp.mark)
        return true;
    return false;
}
sportsman sportsman::operator+(const sportsman& temp) {
    sportsman result;
    result.set(this->Surname + temp.Surname, this->code + temp.code, this->mesto + temp.mesto, this->mark + temp.mark);
    return result;
}