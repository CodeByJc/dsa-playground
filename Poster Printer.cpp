#include <iostream>
using namespace std;

bool isValidSequence(const string &s, int n) {
    bool hasB = false, hasR = false;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') hasB = true;
        if (s[i] == 'R') hasR = true;
        
        if (s[i] == 'W' || i == n - 1) {
            if (hasB != hasR && (hasB || hasR)) return false;
            hasB = hasR = false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        string s;
        cin >> N >> s;
        
        cout << (isValidSequence(s, N) ? "YES" : "NO") << endl;
    }
    return 0;
}
