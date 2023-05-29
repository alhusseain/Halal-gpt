#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
// #include <locale>

using namespace std;

class Daily:public buttons {
protected:
    int m_arrSize;
    string* m_arrValues;
    time_t m_lastTime;
public:
    Daily(int arrSize, string* arrValues) : m_arrSize(arrSize), m_arrValues(arrValues) {
        time(&m_lastTime);
    }

    void displayEvery24Hours() {
        static bool firstElementDisplayed = false;
        static int index = 0;
        time_t currentTime;
        time(&currentTime);

        if (!firstElementDisplayed || difftime(currentTime, m_lastTime) >= 10) {
            cout << m_arrValues[index] << endl;
            index++;
            index %= m_arrSize;
            m_lastTime = currentTime;
            firstElementDisplayed = true;
        }
    }
    void click_to_int()
    {
        cout << "\n 1-Hadith";    //modify your options as you want
        cout << "\n 2-Ayah";
        cout << "\n please enter which option do you want (just one number !): ";
        cin >> choice;
    }


};
class daily_hadith : public Daily {
public:
    daily_hadith(int arrSize, string* arrValues) : Daily(arrSize, arrValues) {
        time(&m_lastTime);
    }
};
class daily_ayah : public Daily {
public:
    daily_ayah(int arrSize, string* arrValues) : Daily(arrSize, arrValues) {
        time(&m_lastTime);
    }
};
