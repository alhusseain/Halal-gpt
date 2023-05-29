#include "zakah.h"

void zakah::zakah_calculator()
{
    {
        set_current();
        cout << "Enter the date (yyyy mm dd) when you got the money: ";
        cin >> input_year >> input_month >> input_day;

        cout << "Enter the amount of money you have: ";
        cin >> input_amount;

        int year_diff = current_year - input_year;
        int month_diff = current_month - input_month;
        int day_diff = current_day - input_day;

        if (month_diff < 0 || (month_diff == 0 && day_diff < 0)) {
            year_diff--;
            month_diff += 12;
        }

        if (year_diff >= 1) {
            if (input_amount >= 247975) {
                double zakah_amount = input_amount * 0.025;
                cout << "Your zakah amount is: " << zakah_amount << endl;
            }
            else {
                cout << "Your wealth is below the nisab, zakah is not obligatory." << endl;
            }
        }
        else {
            cout << "Less than a year has passed since you got the amount, zakah is not obligatory." << endl;
        }
    }
}

void zakah::set_current()
{
    time_t t = time(nullptr);
    tm current_time;
    localtime_s(&current_time, &t);

    current_year = current_time.tm_year + 1900;
    current_month = current_time.tm_mon + 1;
    current_day = current_time.tm_mday;

}
