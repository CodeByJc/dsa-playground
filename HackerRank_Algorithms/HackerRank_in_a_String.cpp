#include <iostream>
#include <string>
using namespace std;

string hackerrankInString(string s) {
    string target = "hackerrank";
    int j = 0;

    for (int i = 0; i < s.size() && j < target.size(); i++) {
        if (s[i] == target[j]) {
            j++;
        }
    }

    return (j == target.size()) ? "YES" : "NO";
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << hackerrankInString(s) << endl;
    }
    return 0;
}
