#pragma once
#include <iostream>
using namespace std;
class B {
private:
    int a;
public:
    B(int a) { this->a = a; };
    void show_B(void) { cout << "B =  " << this->a << ". "; }
};

class D1 : public B {
private:
    int b;
public:
    D1(int a, int b) : B(a) { this->b = b; }
    void show_D1(void) { cout << "D1 = " << this->b << ". "; show_B(); }
};
class D2 : private B {
private:
    int c;
public:
    D2(int a, int c) : B(a) { this->c = c; }
    void show_D2(void) { cout << "D2 = " << this->c << ". "; show_B(); }
};

class D3 : private B {
private:
    int d;
public:
    D3(int a, int d) : B(a) { this->d = d; }
    void show_D3(void) { cout << "D3 = " << this->d << ". "; show_B(); }
};

class D4 : private D1 {
private:
    int e;
public:
    D4(int a,  int c, int e) : D1(a,c) { this->e = e; }
    void show_D4(void) { cout << "D4 = " << this->e << ". "; show_D1(); }
};

class D5 : public D1, private D2, private D3{
    private:
        int z;
public:
    D5(int a, int b, int c, int d, int z) : D1(a, c), D2(a,c), D3(a,d) { this->z = z; }
    void show_D5(void) { cout << "D5 = " << this->z << ". "; show_D1(); show_D2(); show_D3(); }
};