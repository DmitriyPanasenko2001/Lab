#include "myClass.h"

 

void Duration::set_minutes(int minutes)
{
	this->minutes = minutes;
}

int Duration::get_minutes()
{
	return this->minutes;
}

 

void Day::set_day(int day)
{
	this->day = day;
}

int Day::get_day()
{
	return this->day;
}


float Result::calcule_price()
{
	if (get_day() >= 0 && get_day() <= 4)                              
		this->totalPrice = get_minutes() * price_minute;

	else if(get_day()==5||get_day()==6)                                 
		this->totalPrice = get_minutes() * price_minute * discount;

	return this->totalPrice;
}