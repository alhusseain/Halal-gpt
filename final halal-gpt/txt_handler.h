#pragma once
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class txt_manipulation
{
public:
	bool match=false;
	virtual void read_it(ifstream&);
	void write_it(ofstream&, string);
	void check_duplicate(ifstream&, string);
};

