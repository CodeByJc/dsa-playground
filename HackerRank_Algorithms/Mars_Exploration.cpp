#include <iostream>
#include <string>
using namespace std;

int marsExploration(string s) {
    string pattern = "SOS";
    int changes = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != pattern[i % 3]) {
            changes++;
        }
    }

    return changes;
}

int main() {
    string s;
    cin >> s;
    cout << marsExploration(s) << endl;
    return 0;
}
