#pragma once
#include<iostream>
using namespace std;
class register_it
	{
	private:
		string name;
		string gender;
		string age;

	public:
		string get_name();
		string get_gender();
		string get_age();
		void set_prompt();
		void display_prompt();
		void nice_to_muslim();
	};