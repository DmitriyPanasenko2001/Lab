#pragma once
#include "header.h"
class NAME
{
private: 
	std::string Name;
public:
	friend bool operator<(const NAME& fist, const NAME& second);
	friend bool operator ==(NAME& name,std::string& str);
	std::string get();
	void set(std::string);
	void show();
	NAME(std::string);
	friend std::ostream& operator<< (std::ostream& out, const NAME& point) {
		out << point.Name;
		return out;
	}
};
