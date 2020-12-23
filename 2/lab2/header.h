#pragma once
#include <iostream>
#include <string.h>
using namespace std;
#define SIZE 3
bool cheak_index(int INDEX);
void table();
class sportsman {
    std::string Surname;
    double mark;
    int mesto;
    std::string code;
public:
    friend std::istream& operator>> (std::istream& in, sportsman& temp);
    friend std::ostream& operator<< (std::ostream& out, const sportsman& temp);
    void get(std::string* Surname, std::string* code, int* mesto, double* mark);
    void show(void);
    sportsman operator=(const sportsman& temp);
    bool operator==(const sportsman& temp);
    void set(std::string Surname, std::string code, int mesto, double mark);
    sportsman operator+(const sportsman& temp);
};
