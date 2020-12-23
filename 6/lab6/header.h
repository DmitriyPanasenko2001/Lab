#pragma once
#define SIZE 5
#include <iostream>
#include <string>
using namespace std;

class sportsman
{
    string FIO;
    unsigned int birth_year;
    unsigned int discharge;
    unsigned int year_count;
public:
    friend void sort(sportsman* );
    friend void SHOW_ALL_ELEMENTS(sportsman* );
    void redo(string& , int& , int& , int& );
    void show();
    sportsman();
    sportsman(string, int , int , int );
};


void SHOW_ALL_ELEMENTS(sportsman*);
void sort(sportsman*);
