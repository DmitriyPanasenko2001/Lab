#include "header.h"


int main() {
    setlocale(LC_ALL, "rus");

    cout << "Введите елемент\n";
    sportsman sportsmans[SIZE];
    for (int i = 0; i < SIZE; i++)
        cin >> sportsmans[i];
    cout << "Вы ввели:\n";
    table();
    for (int i = 0; i < SIZE; i++)
        cout << sportsmans[i] << endl;
    cout << "\n\nПроверка работы оператора ==\n";
    int n_1, n_2, mesto;
    double mark;
    std::string code, Surname;
TEST1:
    cout << "Первый индекс: "; 
    cin >> n_1;
    cout << "Второй индекс: ";
    cin >> n_2;
    if (!cheak_index(n_1) || !cheak_index(n_2)) 
    {
        cout << "\nОшибка\n";
        goto TEST1;
    }
    cout << "Вы пытаетесь сравнить [ " << sportsmans[n_1] << "] и [" << sportsmans[n_2] << "]  ";
    if (sportsmans[n_1] == sportsmans[n_2])
        cout << "Они равны\n";
    else
        cout << "Они НЕ равны\n";

    cout << "\n\nПроверка =\n";

TEST2:
    cout << "Введите индекс елемента, который хотите клонировать : ";
    cin >> n_1;
    if (!cheak_index(n_1)) {
        cout << "\nОшибка\n";
        goto TEST2;
    }
    sportsman sravn = sportsmans[n_1];
    cout << "Елемент созданный с помощю = : \n"; sravn.show();
    cout << "\n\nПроверка оператора +\n";
TEST3:
    cout << "Первый индекс: ";
    cin >> n_1;
    cout << "Второй индекс: ";
    cin >> n_2;
    if (!cheak_index(n_1) || !cheak_index(n_2)) {
        cout << "\nОшибка\n";
        goto TEST3;
    }
    cout << "Вы пытаетесь соеденить [" << sportsmans[n_1] << "] и [" << sportsmans[n_2] << "]";
    sportsman test231 = sportsmans[n_1] + sportsmans[n_2];
    cout << " Вот что получилось: \n"; test231.show();


}
