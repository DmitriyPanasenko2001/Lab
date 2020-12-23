#pragma once
#include "header.h"
class sportsman
{
private:
    std::string Surname;
    std::string code;
    int mesto;
    double mark;
public:
    sportsman(std::string, std::string, int, double);
    void get(std::string*, std::string*, int*, double*);
    void set(std::string, std::string, int, double);
    void show();
    friend std::istream& operator>> (std::istream&, sportsman&);
    friend std::ostream& operator<< (std::ostream&, const sportsman&);
    sportsman operator=(const sportsman&);
    bool operator==(const sportsman&);
    sportsman operator+(const sportsman&);

    sportsman() {};
    std::string name();
};

class BASE
{
private:
    std::string title_DATA_BASE;
    sportsman* sportsmans[12];
    int col;
    int sorted;
public:
    BASE(std::string);
    ~BASE();
    void pop();
    void insert(std::string, std::string,  double,int );
    void view(void);
    void sort();
    bool SORT_FUNC(std::string s1, std::string s2);
};
