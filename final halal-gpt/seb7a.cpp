#include "seb7a.h"
#include<iostream>
#include<istream>
using namespace std;
void seb7a::set_names_of_allah()
{
    string names[100] = { " ","Allah", "Ar-Rahman", "Ar-Rahim", "Al-Malik", "Al-Quddus",
         "As-Salam", "Al-Mu'min", "Al-Muhaymin", "Al-Aziz", "Al-Jabbar", "Al-Mutakabbir",
        "Al-Khaliq", "Al-Bari'", "Al-Musawwir", "Al-Ghaffar", "Al-Qahhar", "Al-Wahhab", "Ar-Razzaq",
        "Al-Fattah", "Al-'Alim", "Al-Qabid", "Al-Basit", "Al-Khafid", "Ar-Rafi'", "Al-Mu'izz", "Al-Mudhill",
        "As-Sami'", "Al-Basir", "Al-Hakam", "Al-Adl", "Al-Latif", "Al-Khabir", "Al-Halim", "Al-Azim",
        "Al-Ghafur", "Ash-Shakur", "Al-'Ali", "Al-Kabir", "Al-Hafiz", "Al-Muqit", "Al-Hasib",
        "Al-Jalil", "Al-Karim", "Ar-Raqib", "Al-Mujib", "Al-Wasi'", "Al-Hakim", "Al-Wadud", "Al-Majid",
        "Al-Ba'ith", "Ash-Shahid", "Al-Haqq", "Al-Wakil", "Al-Qawiyy", "Al-Matin", "Al-Wali", "Al-Hamid",
        "Al-Muhsi", "Al-Mubdi'", "Al-Mu'id", "Al-Muhyi", "Al-Mumit", "Al-Hayy", "Al-Qayyum", "Al-Wajid",
        "Al-Majid", "Al-Wahid", "Al-Ahad", "As-Samad", "Al-Qadir", "Al-Muqtadir", "Al-Muqaddim", "Al-Mu'akhkhir",
        "Al-'Awwal", "Al-'Akhir", "Az-Zahir", "Al-Batin", "Al-Waliyy", "Al-Muta'ali", "Al-Barr", "At-Tawwab",
        "Al-Muntaqim", "Al-'Afuww", "Ar-Ra'uf", "Malik Al-Mulk", "Dhu'l-Jalal wal-Ikram", "Al-Muqsit", "Al-Jami'",
        "Al-Ghani", "Al-Mughni", "Al-Mani'", "Ad-Darr", "An-Nafi'", "An-Nur", "Al-Hadi", "Al-Badi'", "Al-Baqi",
         "Al-Warith", "Ar-Rashid" };
    for (int i = 0; i < 100; i++)
    {
        name_of_allah[i] = names[i];
    }
}
void seb7a::Click_to_int()
{
    cout << "choose which type of tasbih do you want \n" <<
        "1-tasbeeh\n" << "2-estghfar\n" << "3-alhamd\n" << "4-twheed\n" << endl;
    cin >> choice;
}

void seb7a::choose_menu()
{
    switch (choice)
    {
    case 1:
        name_of_tasbeeh = "subhan ";
        break;
    case 2:
        name_of_tasbeeh = "astaghfor ";
        break;
    case 3:
        name_of_tasbeeh = "al-hamdlel ";
        break;
    case 4:
        name_of_tasbeeh = "la ellah ela ";
        break;

    default:
        name_of_tasbeeh = "subhan ";
        break;
    }
}

void seb7a::begin_tasbeeh()
{
    cout << "mention allah \n if you want to stop counting type 1 \n if you wnt to return to sebha type 2" << endl;
    for (int i = 0; i <= 99; i++) {
        cout << i << "-" << name_of_tasbeeh << name_of_allah[i] << endl;
        char input;
        input=cin.get();
        if(input=='1') break;
        if (input == '2')
        {
            choose_menu();
            begin_tasbeeh();
        }
    }
}