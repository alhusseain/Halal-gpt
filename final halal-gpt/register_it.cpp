#include "register_it.h"
#include <iostream>
#include<string>
using namespace std;



string register_it::get_name()
{
	return name;
}

string register_it::get_gender()
{
	return gender;
}

string register_it::get_age()
{
	return age;
}

void register_it::set_prompt()
{
	cout << "\nName (only first name): "; cin >> name;
	cout << "\nAge: "; cin >> age;
	cout << "\nGender (male/female):"; cin >> gender;
}

void register_it::display_prompt()
{
	cout << "\tname: " << name << "\tGender: " << gender << "\tage: " << age << endl;
}

void register_it::nice_to_muslim()
{
	if (gender == "male") cout << "\n########### Welcome our Brother in islam, " << name << "  ######################\n";
	else cout << "\n########### Welcome our sister in islam, " << name << "  ######################\n";
}