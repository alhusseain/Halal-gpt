#include "file_manip.h"
#include<windows.h>
void file_manip::place_file_name(string place)
{
	file_name = place;
}

void file_manip::open_it()
{
	ShellExecuteA(NULL, "open", file_name.c_str(), NULL, NULL, SW_SHOWDEFAULT);
}

void file_manip::wipe()
{
	system("cls");
}

void file_manip::specific_sleep()
{
	Sleep(3600);
}

