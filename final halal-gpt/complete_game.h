#pragma once
#include"choose_game.h"
using namespace std;
#include<iostream>
#include"Game.h"
class complete_func :public choose_func,Game

{
protected:
	string name;
	int dificulity_setter = 0;
	bool answermark;
public:

	int get_dificulity();
	void display_questions();
	bool getanswer(int answer);
	complete_func(int k);
	complete_func();


};
