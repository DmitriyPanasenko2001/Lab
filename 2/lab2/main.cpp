#include "header.h"


int main() {
    setlocale(LC_ALL, "rus");

    cout << "������� �������\n";
    sportsman sportsmans[SIZE];
    for (int i = 0; i < SIZE; i++)
        cin >> sportsmans[i];
    cout << "�� �����:\n";
    table();
    for (int i = 0; i < SIZE; i++)
        cout << sportsmans[i] << endl;
    cout << "\n\n�������� ������ ��������� ==\n";
    int n_1, n_2, mesto;
    double mark;
    std::string code, Surname;
TEST1:
    cout << "������ ������: "; 
    cin >> n_1;
    cout << "������ ������: ";
    cin >> n_2;
    if (!cheak_index(n_1) || !cheak_index(n_2)) 
    {
        cout << "\n������\n";
        goto TEST1;
    }
    cout << "�� ��������� �������� [ " << sportsmans[n_1] << "] � [" << sportsmans[n_2] << "]  ";
    if (sportsmans[n_1] == sportsmans[n_2])
        cout << "��� �����\n";
    else
        cout << "��� �� �����\n";

    cout << "\n\n�������� =\n";

TEST2:
    cout << "������� ������ ��������, ������� ������ ����������� : ";
    cin >> n_1;
    if (!cheak_index(n_1)) {
        cout << "\n������\n";
        goto TEST2;
    }
    sportsman sravn = sportsmans[n_1];
    cout << "������� ��������� � ������ = : \n"; sravn.show();
    cout << "\n\n�������� ��������� +\n";
TEST3:
    cout << "������ ������: ";
    cin >> n_1;
    cout << "������ ������: ";
    cin >> n_2;
    if (!cheak_index(n_1) || !cheak_index(n_2)) {
        cout << "\n������\n";
        goto TEST3;
    }
    cout << "�� ��������� ��������� [" << sportsmans[n_1] << "] � [" << sportsmans[n_2] << "]";
    sportsman test231 = sportsmans[n_1] + sportsmans[n_2];
    cout << " ��� ��� ����������: \n"; test231.show();


}
