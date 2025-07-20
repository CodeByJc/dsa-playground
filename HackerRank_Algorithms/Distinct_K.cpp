#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;

    string arr[N]; // Array to store input strings
    unordered_map<string, int> freq; // Map to count occurrences of each string

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        freq[arr[i]]++; // Counting occurrences
    }

    int k;
    cin >> k;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] == 1) { // Check for distinct strings
            count++;
            if (count == k) {
                cout << arr[i] << endl;
                return 0;
            }
        }
    }

    cout << "-1" << endl; // If less than k unique strings exist
    return 0;
}
