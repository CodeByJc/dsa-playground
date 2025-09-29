#include <iostream>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    int last_seat = (s + m - 1) % n;
    if (last_seat == 0) return n;  // modulo 0 means the last prisoner is n
    return last_seat;
}

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int n, m, s;
        cin >> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << endl;
    }
    return 0;
}
