#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    // Check if the month is valid
    if (month < 1 || month > 12) {
        cout << "no" << endl;
        return 0;
    }

    // Determine if the year is a leap year
    bool leapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    // Validate the day based on the month
    bool valid = false;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        // Months with 31 days
        if (day >= 1 && day <= 31) {
            valid = true;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // Months with 30 days
        if (day >= 1 && day <= 30) {
            valid = true;
        }
    } else if (month == 2) {
        // February, check for leap year
        if (leapYear) {
            if (day >= 1 && day <= 29) {
                valid = true;
            }
        } else {
            if (day >= 1 && day <= 28) {
                valid = true;
            }
        }
    }

    // Print result based on the validity of the date
    if (valid) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
