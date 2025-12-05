#include <iostream>
#include <string>
using namespace std;

void separateNumbers(string s) {
    int n = s.size();
    bool beautiful = false;
    string firstNum;

    // Try all possible lengths for the first number
    for (int len = 1; len <= n / 2; len++) {
        string start = s.substr(0, len);
        if (start[0] == '0') continue;  // no leading zeros

        long long num = stoll(start);
        string formed = start;

        // Build the sequence until length >= s
        while (formed.size() < n) {
            num++;
            formed += to_string(num);
        }

        // Check if formed equals original string
        if (formed == s) {
            beautiful = true;
            firstNum = start;
            break;
        }
    }

    if (beautiful)
        cout << "YES " << firstNum << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        separateNumbers(s);
    }
    return 0;
}
