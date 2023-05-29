#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include"file_manip.h"
using namespace std;
class Quran:file_manip {
private:
    string surahs[6] = {
        "Last tilawa session",
        "Al-Fatiha",
        "Al-Baqarah",
        "Al-Imran",
        "An-Nisa",
        "Al-Ma'idah",
        // adding more surahs soon
    };

public:
    Quran();
    void Read();

    void Listen();

};