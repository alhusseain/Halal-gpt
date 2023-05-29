#pragma once
#include<iostream>
using namespace std;
class buttons
{
protected:
    int choice;
public:
    void Click_to_int()
    {
        cout << "\n<------ 1-(Tasbeeh)";
        cout << "\n<------ 2-(Tajweed)";
        cout << "\n<------ 3-(Azkar)";
        cout << "\n<------ 4-(Game)";
        cout << "\n<------ 5-(Daily)";
        cout << "\n<------ 6-(Register new)";
        cout << "\n<------ 7-(Quran)";
        cout << "\n<------ 8-(schedule)";
        cout << "\n<------ 9-(calculate zakah)";
        cout << "\n please enter which option do you want from 1 to 9 (just one number !): ";
        cin >> choice;
    }
    void choose_menu();
    int get_choice()
    {
        return choice;
    }

};


