#include "info.h"
#include "buttons.h"
#include<iostream>
using namespace std;
void info::set_files(string arr[4])
{
    for (int i = 0; i < 4; i++)
    {
        files[i] = arr[i];
    }
}
void info::Click_to_int() {
    cout << "\n 1-" + files[0];    //modify your options as you want
    cout << "\n 2-" + files[1];
    cout << "\n 3-" + files[2];
    cout << "\n 4-" + files[3];
    cout << "\n select a file to open: "; cin >> choice;

}

string info::get_file()
{
    return files[choice - 1];
}
