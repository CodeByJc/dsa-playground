#include <iostream>
using namespace std;

int towerBreakers(int n, int m) {
    if (m == 1 || n % 2 == 0)
        return 2;  // Player 2 wins
    else
        return 1;  // Player 1 wins
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << towerBreakers(n, m) << endl;
    }
    return 0;
}
