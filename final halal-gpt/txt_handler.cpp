#include "txt_handler.h"
#include <iostream>
#include<fstream>
using namespace std;
#include<string>
bool txt_manipulation::get_match()
{
    return match;
}
void txt_manipulation::read_it(ifstream& newfile)
{//to be used lazm ifstream newfile("fileofdata.txt");
    string line;
    while (getline(newfile,line) ){
        cout << line<<endl;
    }
}

void txt_manipulation::check_duplicate(ifstream& newfile, string tobechecked)
{
    if (newfile.is_open()) {
        match = false;
        string line;
        while (getline(newfile, line)) {

            if (tobechecked == line) {

                match = true;
                break;
            }

        }
    }
}

void txt_manipulation::write_it(ofstream& newfile, string dataall)
{//to be used lazm ofstream filo("fileofdata.txt", ios::app);
    newfile << dataall << endl;
    newfile.close();
}