#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Optional: Count the number of times a specific integer appears in an array
int find_occurrence(int arr[], int size, int n) {
    int hash[13] = {0};
    for (int i = 0; i < size; i++) {
        hash[arr[i]]++;
    }
    return hash[n];
}

// Optional: Count the number of times a character appears in a string
int find_char_occurrence(const string& str, char c) {
    int hash[256] = {0}; // ASCII characters range
    for (char ch : str) {
        hash[ch]++;
    }
    return hash[c];
}

// Required: Find the element with maximum and minimum frequency in an array
void find_max_min_occurrence(int arr[], int size) {
    unordered_map<int, int> freqMap;

    // Count frequencies
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }

    // Initialize min and max with safe defaults
    int maxFreq = 0, minFreq = size + 1;
    int maxEle = -1, minEle = -1;

    for (const auto& entry : freqMap) {
        int element = entry.first;
        int count = entry.second;

        if (count > maxFreq) {
            maxFreq = count;
            maxEle = element;
        }
        if (count < minFreq) {
            minFreq = count;
            minEle = element;
        }
    }

    // Output results
    cout << "Minimum occurrence: " << minEle << " appears " << minFreq << " time(s)" << endl;
    cout << "Maximum occurrence: " << maxEle << " appears " << maxFreq << " time(s)" << endl;
}

int main() {
    int arr[] = {1, 5, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Uncomment to test integer occurrence
    // int n;
    // cout << "Enter number to count: ";
    // cin >> n;
    // cout << "Occurrence of " << n << ": " << find_occurrence(arr, size, n) << endl;

    // Uncomment to test character occurrence
    // string inputStr;
    // char ch;
    // cout << "Enter string: ";
    // cin >> inputStr;
    // cout << "Enter character to count: ";
    // cin >> ch;
    // cout << "Occurrence of '" << ch << "': " << find_char_occurrence(inputStr, ch) << endl;

    // Required function call
    find_max_min_occurrence(arr, size);

    return 0;
}
