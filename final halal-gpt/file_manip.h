#pragma once
#include<iostream>
using namespace std;
class file_manip
{
protected:
	string file_name;
	int want;
public:
	void place_file_name(string place);
	void open_it();
	void wipe();
	void specific_sleep();
	void return_and_choice();
};

