#include "schedule.h"
#include"txt_handler.h"
void schedule::set_schedule()
{
	string data;
	int num;
	cout << "How many dates are you going to register?"; cin >> num;
	ifstream fili("schedule.txt");
	//ofstream filo("schedule.txt", ios::app);
	for (int i = 0; i < num; i++)
	{
		string surah;
		cout << i<<"--> Day	 month	year	surah: "; cin >> day >> month >> year>>surah;
		data = to_string(day) + "\t" + to_string(month) + "\t" + to_string(year)+"_"+surah;
		check_duplicate(fili, data);
		while (match)
		{
			cout << "date registered before....try again";
			cout << i << "--> Day-->month-->year-->surah: "; cin >> day >> month >> year >> surah;
			data = to_string(day) + "_" + to_string(month) + "_" + to_string(year) + "_"+surah;
			check_duplicate(fili, data);
		}
		fili.close();
		ofstream filo("schedule.txt", ios::app);
		write_it(filo, data);
		filo.close();

	}
}

void schedule::display_schedule()
{
	cout << "below is your current schedule:"<<endl;
	ifstream fili("schedule.txt");
	read_it(fili);
}

void schedule::clear_schedule()
{
	ofstream filo("schedule.txt");
	filo.close();
}
