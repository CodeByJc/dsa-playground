#include <iostream>
using namespace std;

string gameOfStones(int n) {
    // Winning pattern repeats every 7
    if (n % 7 == 0 || n % 7 == 1)
        return "Second";
    else
        return "First";
}

int main() {
    int t;  // number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << gameOfStones(n) << endl;
    }
    return 0;
}
