#include "score_handler.h"
#include <iostream>
using namespace std;
#include<fstream>

#include<string>

void scorehandler::getmaxscore()
{
	ifstream scoreleader("scoreleaderboard.txt");
	int max = 0;
	string line;
	while (scoreleader >> line) {
		cout << line << endl;
		if (stoi(line) > max)max = stoi(line);

	}cout << "max score" << "is" << max;
}
void scorehandler::writescore(int score)
{
	ofstream filescoreleader("scoreleaderboard.txt", ios::app);
	filescoreleader << score << endl;
	filescoreleader.close();
}