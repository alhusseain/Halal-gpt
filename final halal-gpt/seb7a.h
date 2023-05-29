#pragma once
#include<iostream>
#include"buttons.h"
using namespace std;
class seb7a :public buttons
{
private:
	string name_of_tasbeeh;
	string input;
	int type_of_tasbih;
	string name_of_allah[100];
public:
	void set_names_of_allah();
	void Click_to_int();
	void choose_menu();
	void begin_tasbeeh();
};
