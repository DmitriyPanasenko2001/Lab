#include "header.h"
void table() {
    cout << "____________________________________________________________\n";
    cout << "| Фамилия | Код команды  | Количетво баллов | Место в итоге|\n";
}
bool cheak_index(int N) {
    if (N < 0 || N >= SIZE)
        return false;
    else
        return true;
}
