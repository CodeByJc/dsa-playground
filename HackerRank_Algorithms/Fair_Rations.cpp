#include <iostream>
#include <vector>
using namespace std;

string fairRations(vector<int> B) {
    int loaves = 0;
    int n = B.size();

    for (int i = 0; i < n - 1; i++) {
        if (B[i] % 2 != 0) {  // If odd
            B[i]++;
            B[i + 1]++;
            loaves += 2;
        }
    }

    if (B[n - 1] % 2 != 0)
        return "NO";
    else
        return to_string(loaves);
}

int main() {
    int n;
    cin >> n;
    vector<int> B(n);
    for (int i = 0; i < n; i++)
        cin >> B[i];

    cout << fairRations(B);
    return 0;
}
