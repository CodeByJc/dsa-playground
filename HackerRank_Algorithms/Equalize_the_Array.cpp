#include <iostream>
#include <unordered_map>
using namespace std;

int equalizeArray(int arr[], int n) {
    unordered_map<int, int> freq;
    int maxFreq = 0;

    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq)
            maxFreq = freq[arr[i]];
    }

    // Minimum deletions = total - most frequent count
    return n - maxFreq;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << equalizeArray(arr, n);
    return 0;
}
