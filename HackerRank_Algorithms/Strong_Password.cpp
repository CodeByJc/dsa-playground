#include <iostream>
#include <string>
using namespace std;

int minimumNumber(int n, string password) {
    bool has_digit = false;
    bool has_lower = false;
    bool has_upper = false;
    bool has_special = false;
    string special_characters = "!@#$%^&*()-+";

    for (char c : password) {
        if (isdigit(c)) has_digit = true;
        else if (islower(c)) has_lower = true;
        else if (isupper(c)) has_upper = true;
        else if (special_characters.find(c) != string::npos) has_special = true;
    }

    int missing_types = 0;
    if (!has_digit) missing_types++;
    if (!has_lower) missing_types++;
    if (!has_upper) missing_types++;
    if (!has_special) missing_types++;

    return max(missing_types, 6 - n);
}

int main() {
    int n;
    string password;
    cin >> n >> password;

    cout << minimumNumber(n, password) << endl;
    return 0;
}
