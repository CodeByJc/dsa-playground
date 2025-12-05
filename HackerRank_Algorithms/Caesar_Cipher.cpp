#include <iostream>
#include <string>
using namespace std;

string caesarCipher(string s, int k) {
    k = k % 26; // Rotation beyond 26 is redundant

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            s[i] = 'a' + (c - 'a' + k) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            s[i] = 'A' + (c - 'A' + k) % 26;
        }
        // Non-alphabetic characters remain unchanged
    }

    return s;
}

int main() {
    int n, k;
    string s;

    cin >> n; // read length (not needed logically)
    cin >> s;
    cin >> k;

    cout << caesarCipher(s, k) << endl;
    return 0;
}
