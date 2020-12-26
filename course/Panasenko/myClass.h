#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

const float price_minute = 0.45;
const float discount     = 0.80;

class Duration                               
{
	int minutes;                            

public:
	Duration() { this->minutes = 0; }       

	void set_minutes(int);                  
	int get_minutes();                     
};

class Day                                    
{
	int day;                                 
  
public:
	Day() { this->day = -1;}                

	void set_day(int);                      
	int get_day();                          
};   

class Result: public Duration, public Day   
{
	float totalPrice;                         

public:
	float calcule_price();                    
};
