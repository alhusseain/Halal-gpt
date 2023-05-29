//#pragma once
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include"Date_time.h"
#include"file_manip.h"
using namespace std;

class reminder:protected Date_time,file_manip {
private:
    time_t now;
    struct tm* timed;
public:
    reminder() {
        now = time(0);
        timed = localtime(&now);
        day = timed->tm_mday;
        hour = timed->tm_hour;
        minute = timed->tm_min;
        second = timed->tm_sec;
    }

    void run() {
            now = time(0);
            timed = localtime(&now);
            char* dt = ctime(&now);
            day = timed->tm_mday;
            hour = timed->tm_hour;
            minute = timed->tm_min;
            second = timed->tm_sec;

            if (hour == 3 && minute == 05) {
                wipe();
                cout << "\n" << dt << endl << "It's time for Fajr - Leave everything and go pray :)" << endl;
                specific_sleep();
            }
            if (hour == 5 && minute == 59) {
                wipe();
                cout << "\n" << dt << endl << "It's time for Sunrise - Leave everything and go pray :)" << endl;
                specific_sleep();
            }
            if (hour == 12 && minute == 52) {
                wipe();
                cout << "\n" << dt << endl << "It's time for Dhuhr - Leave everything and go pray :)" << endl;
                specific_sleep();
            }
            if (hour == 17 && minute == 18) {
                wipe();
                cout << "\n" << dt << endl << "It's time for Asr - Leave everything and go pray :)" << endl;
                specific_sleep();
            }
            if (hour == 19 && minute == 46) {
                wipe();
                cout << "\n" << dt << endl << "It's time for Maghrib - Leave everything and go pray :)" << endl;
                specific_sleep();
            }
            if (hour == 21 && minute == 15) {
                wipe();
                cout << "\n" << dt << endl << "It's time for Isha - Leave everything and go pray :)" << endl;
                specific_sleep();
            }
        }


};