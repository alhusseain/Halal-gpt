#include "complete_game.h"
using namespace std;
#include<iostream>
#include"Game.h"
int complete_func::get_dificulity()
{
	return dificulity_setter;
}
void complete_func::display_questions() {
	if (dificulity_setter == 0)
	{
		int random = 1 + (rand() % 2);
		switch (random)
		{
		case 1: cout << "ghazwa ohod was in ___ ad" << endl;
			answermark = getanswer(1);;
			break;

		case 2:cout << " how many hizb in juz " << endl;
			answermark = getanswer(2);;
			break;

		}
	}
	if (dificulity_setter == 1)
	{
		int random = 1 + (rand() % 2);
		switch (random)
		{
		case 1: cout << "who killed omar ebn el khatab  ?" << endl;
			answermark = getanswer(3);;
			break;

		case 2:cout << " what was the name of ibrahim's egyptian wife? " << endl;
			answermark = getanswer(4);
			break;

		}
	}
	if (dificulity_setter == 2)
		answermark = 0;


	if (answermark) {
		cout << "Congrats my brother " << endl; dificulity_setter += 1;
		display_questions(); answermark = 0;
	}
}


bool complete_func::getanswer(int answerprompt)
{
	switch (answerprompt)
	{
	case 1:	cout << "enter the year " << endl
		;

		cin >> answerrrrr;
		if (answerrrrr == 625) {
			return true;
		}
		else {
			return false;
		}break;
	case 2:	cout << "enter number" << endl
		;

		cin >> answerrrrr;
		if (answerrrrr == 2) {
			return true;
		}
		else {
			return false;
		}

		break;


	case 3:	cout << "enter name" << endl
		;

		cin >> name;
		if (name == "abu lu'lua") {
			return true;
		}
		else {
			return false;
		}

		break;


	case 4:	cout << "enter name" << endl;

		cin >> name;
		if (name == "hajar") {
			return true;
		}
		else {
			return false;
		}

		break;


	}
}

complete_func::complete_func(int k)
{
	dificulity_setter = k;
}