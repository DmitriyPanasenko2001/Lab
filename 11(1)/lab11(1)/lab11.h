#pragma once

#ifndef _FOO_H_
#define  _FOO_H_

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

class Teams {
	string name;
	char kod;
	unsigned int mark;
	float place;
public:
	void set(string a, char b, unsigned int c, float d);
	void get(string a, char& b, unsigned int& c, float& d);
	void show(void);
};

void Teams::set(string a, char b, unsigned int c, float d) {
	name = a;
	kod = b;
	mark = c;
	place = d;
}

void Teams::get(string a, char& b, unsigned int& c, float& d)
{
	a = name;
	b = kod;
	c = mark;
	d = place;
}

void Teams::show(void) {
	cout << name << " ";
	cout << kod << " ";
	cout << mark << " ";
	cout << place << " ";
}
#endif