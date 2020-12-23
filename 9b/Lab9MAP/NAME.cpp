#include "NAME.h"

string NAME::get() {
	return this->Name;
}
void NAME::set(string Name) {
	this->Name = Name;
}
void NAME::show() {
	cout << "Name: " <<  this->Name << ". ";
}
NAME::NAME(string Name) {
	this->Name = Name;
}
bool operator<(const NAME& fist ,const NAME& second) {
	std::string temp = ((NAME)second).get();
	std::string temp1 = ((NAME)fist).get();
	if (temp1 < temp)
		return true;
	else
		return false;
}
bool operator ==(NAME& name, std::string& str) {
	if (str == name.get())
		return true;
	else
		return false;
}