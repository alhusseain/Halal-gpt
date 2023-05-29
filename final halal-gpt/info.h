#pragma once
#include<iostream>
#include"buttons.h"
using namespace std;
class info :public buttons
{
private:
	string files[4];
public:
	void set_files(string arr[4]);
	void Click_to_int();
	string get_file();
};
