#include "header.h"

int main() {
    setlocale(LC_ALL, "ru");
    cout << "������� ������ ��������� �����: ";

M1:
    int count; 
    cin >> count;
    if (count % 2 != 0 || count <= 0) {
        cout << "������� �������: "; goto M1;
    }
    ofstream fo;
    fo.open("t.txt");
    cout << "������� �����: ";
    for (int i = 0; i < count; i++) {
        double chislo; 
        cin >> chislo;
        fo << chislo << endl;
    }
    fo.close();



    double* count_of_num = new double[count];
    try
    {
        ifstream fi("t.txt");
        if (!fi) {
            throw exception();
        }
        string string_n;
        for (int i = 0; i < count; i++) {
            fi >> string_n; count_of_num[i] = stod(string_n.c_str());
        }
        COMP* massive = new COMP[count / 2];
        for (auto i = 0, z = 0; i < count / 2; i++) {
            massive[i].to_complex(count_of_num[z], count_of_num[z + 1]);
            z += 2;
        }
        for (auto i = 0; i < count / 2; i++)
            massive[i].OUT();
        fi.close();
    }
    catch (const std::exception&)
    {
        cout << "FILE ERROR\n";
        exit(-1);
    }


}