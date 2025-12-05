#include <iostream>
#include <string>
using namespace std;

long repeatedString(string s, long n) {
    long countA = 0;

    // Step 1: count 'a' in one full string
    for (char c : s)
        if (c == 'a')
            countA++;

    // Step 2: how many full repeats fit in n
    long fullRepeats = n / s.length();

    // Step 3: count leftover 'a's in the remaining part
    long remainder = n % s.length();
    long extraA = 0;
    for (int i = 0; i < remainder; i++)
        if (s[i] == 'a')
            extraA++;

    // Step 4: total count
    return (countA * fullRepeats) + extraA;
}

int main() {
    string s;
    long n;
    cin >> s >> n;
    cout << repeatedString(s, n);
    return 0;
}
