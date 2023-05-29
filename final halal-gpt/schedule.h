#pragma once
#include"Date_time.h"
#include"txt_handler.h"
class schedule:public Date_time,txt_manipulation
{

public:
	void set_schedule();
	void display_schedule();
	void clear_schedule();

};

