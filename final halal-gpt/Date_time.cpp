#include "Date_time.h"
#include<iostream>
using namespace std;

void Date_time::set_date(int d, int y, int m)
{
	day = d; year = y; month = m;
}

void Date_time::set_time(int h, int m, int s)
{
	hour = h; minute = m; second = s;
}

void Date_time::display_date()
{
	cout << day << "/" << month << "/" << year;
}

void Date_time::set_day_name(string n)
{
	day_name = n;
}

void Date_time::display_time()
{
	cout << hour << ":" << minute << ":" << second;
}
