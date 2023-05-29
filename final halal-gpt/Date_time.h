#pragma once
#include<iostream>
using namespace std;
class Date_time
{
protected:
	int day, year, month;
	string day_name;
	int hour, minute, second;
public:
	void set_date(int d, int y, int m);
	void set_time(int h, int m, int s);
	void set_day_name(string n);
	void display_date();
	void display_time();
};
