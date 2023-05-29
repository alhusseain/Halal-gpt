#pragma once
#include <iostream>
#include <ctime>
#include"Date_time.h"

using namespace std;

class zakah {
private:
	int input_year, input_month, input_day;
	double input_amount;
	int current_year;
	int current_month;
	int current_day;
public:
	void zakah_calculator();
	void set_current();
};