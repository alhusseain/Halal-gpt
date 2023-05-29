#pragma once
#include"Game.h"
class choose_func:public Game
{
protected:
	bool answermark; int answerrrrr; int dificulity_setter;
public:
	int get_difficulity();
	void display_questions();
	bool getanswer(int answer);
	choose_func(int k);
	choose_func();
};
