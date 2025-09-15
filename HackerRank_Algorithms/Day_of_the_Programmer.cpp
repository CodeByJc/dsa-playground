#include <iostream>
using namespace std;

string dayOfProgrammer(int year) {
    string date;

    if (year == 1918) {
        // Special case: transition year
        date = "26.09.1918";
    } 
    else if (year < 1918) {
        // Julian calendar
        if (year % 4 == 0) {
            date = "12.09." + to_string(year); // leap year
        } else {
            date = "13.09." + to_string(year); // non-leap year
        }
    } 
    else {
        // Gregorian calendar
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            date = "12.09." + to_string(year); // leap year
        } else {
            date = "13.09." + to_string(year); // non-leap year
        }
    }

    return date;
}

int main() {
    int year;
    cin >> year;
    cout << dayOfProgrammer(year) << endl;
    return 0;
}
