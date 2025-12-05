#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void kaprekarNumbers(long p, long q) {
    vector<long> results;

    for (long n = p; n <= q; n++) {
        long long square = (long long)n * n;
        string s = to_string(square);
        int d = to_string(n).length();

        string rightPart = s.substr(s.length() - d); // last d digits
        string leftPart = (s.length() > d) ? s.substr(0, s.length() - d) : "0";

        long left = stol(leftPart);
        long right = stol(rightPart);

        if (left + right == n)
            results.push_back(n);
    }

    if (results.empty()) {
        cout << "INVALID RANGE";
    } else {
        for (size_t i = 0; i < results.size(); i++) {
            cout << results[i];
            if (i != results.size() - 1)
                cout << " ";
        }
    }
}

int main() {
    long p, q;
    cin >> p >> q;
    kaprekarNumbers(p, q);
    return 0;
}
