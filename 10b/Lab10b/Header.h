#pragma once
#include <vector>
#include <iostream>
#include <conio.h> 
#include <windows.h>
#include <ctime>
using namespace std;

class Sum {
	int x, y, s = 0;
public:
	Sum() {
		x = 3;
		y = 7;
	}

	Sum(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void init(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << x << " " << y << " Ñóììà:" << s << endl;
	}

	void sum() {
		s = x + y;
	}
};