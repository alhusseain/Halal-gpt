#include "quran.h"
void sleep(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
}


Quran::Quran()
{
    int chooser;
    cout << "Press     1    for Reading Quran  or    2   for Listening:  ";
    cin >> chooser;
    if (chooser == 1)
    {
        Read();
    }
    else if (chooser == 2)
    {
        Listen();
    }

    else
    {
        cout << "wrong entry";
    }
}

void Quran::Read()
{
    cout << " choose a Surah to read : " << endl;
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << surahs[i] << endl;
    }
    int selected_surah;
    cin >> selected_surah;
    if (selected_surah == 1) {
        cout << "You have selected  " << surahs[selected_surah - 1] << "." << endl;
        sleep(1);
        string url = "file:///C:/Users/fires/source/repos/Mushaf.pdf";
        string command = "start msedge.exe " + url;

        system(command.c_str());


    }
    else if (selected_surah == 2) {
        cout << "You have selected Surah " << surahs[selected_surah - 1] << "." << endl;
        sleep(1);
        string url = "file:///C:/Users/fires/source/repos/Mushaf.pdf#page=10";
        string command = "start msedge.exe " + url;

        system(command.c_str());


    }
    else if (selected_surah == 3) {
        cout << "You have selected Surah " << surahs[selected_surah - 1] << "." << endl;
        sleep(1);
        string url = "file:///C:/Users/fires/source/repos/Mushaf.pdf#page=11";
        string command = "start msedge.exe " + url;

        system(command.c_str());


    }
    else if (selected_surah == 4) {
        cout << "You have selected Surah " << surahs[selected_surah - 1] << "." << endl;
        sleep(1);
        string url = "file:///C:/Users/fires/source/repos/Mushaf.pdf#page=59";
        string command = "start msedge.exe " + url;

        system(command.c_str());


    }
    else  if (selected_surah == 5) {
        cout << "You have selected Surah " << surahs[selected_surah - 1] << "." << endl;
        sleep(1);
        string url = "file:///C:/Users/fires/source/repos/Mushaf.pdf#page=86";
        string command = "start msedge.exe " + url;

        system(command.c_str());


    }
    else if (selected_surah == 6) {
        cout << "You have selected Surah " << surahs[selected_surah - 1] << "." << endl;
        sleep(1);
        string url = "file:///C:/Users/fires/source/repos/Mushaf.pdf#page=115";
        string command = "start msedge.exe " + url;

        system(command.c_str());


    }
    else {
        cout << "Invalid selection." << endl;
    }
}

void Quran::Listen()
{
    cout << " choose a Surah to Listen : " << endl;
    for (int i = 1; i < 6; i++) {
        cout << i << ". " << surahs[i] << endl;
    }
    int selected_surah;
    cin >> selected_surah;
    if (selected_surah == 1) {
        cout << "You have selected  " << surahs[selected_surah] << "." << endl;
        sleep(1);
        place_file_name("fatiha.mp3");
        open_it();

    }

    else   if (selected_surah == 2) {
        cout << "You have selected  " << surahs[selected_surah] << "." << endl;
        sleep(1);
        place_file_name("bakara.mp3");
        open_it();

    }

    else   if (selected_surah == 3) {
        cout << "You have selected  " << surahs[selected_surah] << "." << endl;
        sleep(1);
        place_file_name("al-imran.mp3");
        open_it();

    }

    else   if (selected_surah == 4) {
        cout << "You have selected  " << surahs[selected_surah] << "." << endl;
        sleep(1);
        place_file_name("al-nisaa.mp3");
        open_it();
    }


    else   if (selected_surah == 5) {
        cout << "You have selected  " << surahs[selected_surah] << "." << endl;
        sleep(1);
        place_file_name("al-maedaah.mp3");
        open_it();
    }

}