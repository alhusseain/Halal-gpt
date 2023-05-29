#include<iostream>
#include <ctime>
#include <cstdlib>
#include<string>
#include <windows.h>
#include"Date_time.h"
#include"file_manip.h"
#include"buttons.h"
#include"info.h"
#include"register_it.h"
#include"seb7a.h"
#include"choose_game.h"
#include"complete_game.h"
#include"reminder.h"
#include"daily.h"
#include"txt_handler.h"
#include"quran.h"
#include"schedule.h"
#include"zakah.h"
#include"score_handler.h"
#include"Game.h"
//there are other two child classes of Daily,which are daily_ayah and daily_azkar.
using namespace std;


//-----------------------------------------

void remind()
{
    reminder salah;
    salah.run();
}
//--------------------------------------------------

void menu()
{
    remind();
    string details;
    ifstream fili("names.txt");
    getline(fili, details);
    //txt_manipulation user;
    //user.read_it(fili);
    cout << "Welcome, "<<details<<" :)";
    buttons menu;
    menu.Click_to_int();
    menu.choose_menu();
}
//------------------------------------------

void file_manip::return_and_choice()
{
    cout << "return to main menu?(0 for no and 1 for yes): "; cin >> want;
    if (want) {
        file_manip program;
        program.wipe();
        menu();

    }
}
//------------------------------------------------


void zaky()
{
    zakah calculate;
    calculate.zakah_calculator();
}
//-----------------------------------------------


void schedule_it()
{
    int want;
    schedule maker;
    maker.set_schedule();
    cout << "do you want to display current schedule? (0 for no and 1 for yes)"; cin >> want;
    if(want) maker.display_schedule();
    cout << "do you want to clear schedule?(0 for no and 1 for yes)"; cin >> want;
    if (want) maker.clear_schedule();


}
void mushaf()
{
    Quran book;
    book.Read();

}
//---------------------------------------------------


void daily_info()
{
 //int choice;
// locale::global(std::locale("ar_SA")); 
    string arr_hadith[7] = {
    "The world is green and beautiful, and Allah has put you in charge of it and sees how you acquit yourselves.",

"Seek knowledge from the cradle to the grave.",

"The best Jihad is speaking a word of truth in front of a tyrant ruler.",

"He who has in his heart the weight of a  mustard seed of pride shall not enter Jannah.",

"Verily Allah is kind and loves kindness in all matters.",

"None of you truly believes until he wishes for his brother what he wishes for himself."
    };
    Daily daily_menu(7, arr_hadith);
    daily_hadith hadith(7, arr_hadith);
    string arr_ayah[7] = {};
    daily_ayah ayah(7, arr_ayah);
    daily_menu.click_to_int();
    if (daily_menu.get_choice() == 1)
    {
        while (true) {
            system("cls");
            hadith.displayEvery24Hours();
            Sleep(5);
        }
    }
    else {
        while (true) {
            system("cls");
            ayah.displayEvery24Hours();
            Sleep(86400);
        }
    }

}
//-----------------------------------------------




void registering()
{
    string data;
    register_it account;
    ifstream fili("users.txt");
    txt_manipulation txt;
    account.set_prompt();
    account.get_name() + "\t" + account.get_gender() + "\t" + account.get_age();
    data = account.get_name() + "\t" + account.get_gender() + "\t" + account.get_age();
    txt.check_duplicate(fili,data);
    cout << txt.match<<endl;
    while (txt.match)
    {
        cout << "registered before...Cannot be regsitered again!!" << endl;
        account.set_prompt();
        data = account.get_name() + "\t" + account.get_gender() + "\t" + account.get_age();
        txt.check_duplicate(fili, data);
    }
    fili.close();
    ofstream filo("users.txt",ios::app);
    ofstream name_it("names.txt");
    txt.write_it(filo, data);
    txt.write_it(name_it, account.get_name());
    filo.close();
    account.display_prompt();
    account.nice_to_muslim();
}
//----------------------------------------------


void tajweed()
{

    info tajweed;
    file_manip tajweed_files;
    string arr[4] = { "nun-sakina.pdf","mim-sakina.pdf","dhfjdhfjhdf","djhfjdhjfhj" };
    tajweed.set_files(arr);
    tajweed.Click_to_int();
    tajweed_files.place_file_name(tajweed.get_file());
    tajweed_files.open_it();

}
//-----------------------------------------------


void azkar()
{
    info zekr;
    file_manip zekr_file;
    string arr[4] = { "day and night.pdf","kdjfkj","dhfjdhfjhdf","djhfjdhjfhj" };
    zekr.set_files(arr);
    zekr.Click_to_int();
    zekr_file.place_file_name(zekr.get_file());
    zekr_file.open_it();


}
//----------------------------------------------


void sabe7_ellah()
{
    seb7a tasbeeh;
    tasbeeh.set_names_of_allah();
    tasbeeh.Click_to_int();
    tasbeeh.choose_menu();
    tasbeeh.begin_tasbeeh();

}
//------------------------------------------------


void game()
{
    scorehandler game_score;
    choose_func game1(0);
    int want;
    complete_func game2(0);
    game1.display_questions();
    game2.display_questions();
    int score = game1.get_difficulity() + game2.get_dificulity();
    game_score.writescore(score);
    cout << "do you want to know the highest score? (0 for no and 1 for yes): "; cin >> want;
    if (want) game_score.getmaxscore();
}
//--------------------------------------------------

void buttons::choose_menu()
{
    file_manip program;
    switch (choice) {
    case 1:
        cout << endl << "\t\t|----- Tasbeeh -----|" << endl;
        sabe7_ellah();
        program.return_and_choice();
        break;
    case 2:
        cout << endl << "\t\t|----- Tajweed -----|" << endl;
        tajweed();
        program.return_and_choice();
        break;
    case 3:
        cout << endl << "\t\t|----- Azkar -----|" << endl;
        azkar();
        program.return_and_choice();
        break;
    case 4:
        cout << endl << "\t\t|----- Game -----|" << endl;
        game();
        program.return_and_choice();
        break;
    case 5:
        cout << endl << "\t\t|----- Daily -----|" << endl;
        daily_info();
        program.return_and_choice();
        break;
    case 6:
        cout << endl << "\t\t|----- Registering -----|" << endl;
        registering();
        program.return_and_choice();
        break;
    case 7:
        cout << endl << "\t\t|----- Quran -----|" << endl;
        mushaf();
        program.return_and_choice();
        break;
    case 8:
        cout << endl << "\t\t|----- Schedule -----|" << endl;
        schedule_it();
        program.return_and_choice();
        break;

    case 9:
        cout << endl << "\t\t|----- Zakah -----|" << endl;
        zaky();
        program.return_and_choice();
        break;
    }
}




int main()
{
    menu();


}