#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>

using namespace std;

void checkPassword(int N, vector<int>& arr) {
    unordered_map<int, int> freq;  // To store the frequency of each number

    // Count the frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    bool isValid = true;
    bool hasExactlyTwo = false;
    int mostFreqNum = numeric_limits<int>::max();
    int maxFreq = 0;

    for (auto& entry : freq) {
        int num = entry.first;
        int count = entry.second;

        if (count % 2 != 0) {
            isValid = false;  // Condition 1 failed
        }

        if (count == 2) {
            hasExactlyTwo = true;  // Condition 2 passed
        }

        if (count > maxFreq || (count == maxFreq && num < mostFreqNum)) {
            maxFreq = count;
            mostFreqNum = num;
        }
    }

    if (isValid && hasExactlyTwo) {
        cout << "VALID" << endl;
    } else {
        cout << "INVALID" << endl;
    }

    cout << mostFreqNum << endl;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    checkPassword(N, arr);
    return 0;
}
