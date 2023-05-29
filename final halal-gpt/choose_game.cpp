#include "choose_game.h"
#include<iostream>
using namespace std;
int choose_func::get_difficulity()
{
	return dificulity_setter;
}
void choose_func::display_questions()
{

	if (dificulity_setter == 0)
	{
		int random = 1 + (rand() % 2);
		switch (random)
		{
		case 1: cout << "the first caliphate of the islamic reign" << endl;
			answermark = getanswer(1);;
			break;

		case 2:cout << " at which HJ year did the muslims conquest makkah ? " << endl;
			answermark = getanswer(2);;
			break;

		}
	}
	if (dificulity_setter == 1)
	{
		int random = 1 + (rand() % 2);
		switch (random)
		{
		case 1: cout << "how many suras in quran ?" << endl;
			answermark = getanswer(3);;
			break;

		case 2:cout << " what is the name of khazen el_nar " << endl;
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


bool choose_func::getanswer(int answerprompt)
{
	switch (answerprompt)
	{
	case 1:	cout << "1)omar " << endl << "2)abou bakr" << endl << "May Allah be pleased with him" << endl
		<< "put 1 for first and 2 for second";

		cin >> answerrrrr;
		if (answerrrrr == 2) {
			return true;
		}
		else {
			return false;
		}break;
	case 2:	cout << "1)8 HJ" << endl << "2)7 HJ" << endl
		<< "put 1 for first and 2 for second";

		cin >> answerrrrr;
		if (answerrrrr == 1) {
			return true;
		}
		else {
			return false;
		}

		break;


	case 3:	cout << "1)114" << endl << "2)141" << endl
		<< "put 1 for first and 2 for second";

		cin >> answerrrrr;
		if (answerrrrr == 1) {
			return true;
		}
		else {
			return false;
		}

		break;


	case 4:	cout << "1)radwan" << endl << "2)malek" << endl
		<< "put 1 for first and 2 for second";

		cin >> answerrrrr;
		if (answerrrrr == 2) {
			return true;
		}
		else {
			return false;
		}

		break;


	}
}

choose_func::choose_func(int k)
{
	dificulity_setter = k;
}
choose_func::choose_func()
{
	dificulity_setter = 0;
}