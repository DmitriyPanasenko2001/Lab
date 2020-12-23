#include "header.h"


int main() {
    cout << "B: ";B b(1); b.show_B(); cout << "\n";
    cout << "D1: ";    D1 d1(1, 2); d1.show_D1(); cout << "\n";
    cout << "D2: ";    D2 d2(1, 3); d2.show_D2(); cout << "\n";
    cout << "D3: ";    D3 d3(1, 4); d3.show_D3(); cout << "\n";
    cout << "D4: ";    D4 d4(1, 2, 5); d4.show_D4(); cout << "\n";
    cout << "D5: ";    D5 d5(1, 2, 3, 4, 6); d5.show_D5(); cout << "\n";
    system("pause");
}
