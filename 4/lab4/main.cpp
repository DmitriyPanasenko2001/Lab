
#include "header.h"




int main() {
    setlocale(LC_ALL, "ru");
    BASE* sporsman_data_base = new BASE("SPORTSMANS");
    std::string Surname, code;
    int mesto;
    double mark;
    bool working = true;
    while (working) {
        int temp_o;
        cout << "1. �������� ������\n2. ������� ������\n3. ����������� ����\n4. ������� ����\n0. �����\n";
        cin >> temp_o;
        switch (temp_o)
        {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "!!!���� ��������!!!\n"; cout << "�������: ";
            cin >> Surname;
            cout << "��� �������: ";
            cin >> code;
            cout << "���������� ������: ";
            cin >> mark;
            cout << "����� � �����: "; 
            cin >> mesto; 
            cout << endl;
            sporsman_data_base->insert(Surname, code, mark,mesto);
            break;
        case 2:
            sporsman_data_base->pop();
            break;
        case 3:
            sporsman_data_base->sort();
            break;
        case 4:
            sporsman_data_base->view();
            break;

        default:
            exit(-1);
            break;
        }
    }


}
