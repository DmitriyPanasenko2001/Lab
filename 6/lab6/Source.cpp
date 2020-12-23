#include "header.h"


void sportsman::redo( string& FIO, int& birth_year, int& discharge, int& year_count) {
    if (birth_year != -1)
        this->birth_year = birth_year;
        this->FIO = FIO;
        this->discharge = discharge;
        this->year_count = year_count;
}
void sportsman::show() {
    cout << "ФИО - " << this->FIO << ". Год рождения - " <<  this->birth_year << ". Разряд - "
        << this->discharge << ". Количество лет в спорте - " << this->year_count << ".\n";
}

void sort(sportsman* arr) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int i = 0; i < SIZE - 1; i++) {
            if (arr[i].birth_year > arr[i + 1].birth_year) {
                sportsman temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
void SHOW_ALL_ELEMENTS(sportsman* arr) {
    sort(arr);
    for (int i = 0; i < SIZE; i++) {
        arr[i].show();
    }
}

sportsman::sportsman()
{
    this->discharge = 0;
    this->year_count = 0;
    this->birth_year = 0;
    this->FIO = "NULL STREET";
}
sportsman::sportsman(string FIO, int birth_year, int discharge, int year_count) {
    this->discharge = discharge;
    this->year_count = year_count;
    this->birth_year = birth_year;
    this->FIO = FIO;
}