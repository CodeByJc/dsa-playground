#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

const int MAX_N = 1000000;
int arr[MAX_N];
long long prefixSum[MAX_N + 1];

int main() {
    int N;
    cin >> N;
    
    // Read input array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    // Compute prefix sum
    prefixSum[0] = 0;
    for (int i = 1; i <= N; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }
    
    unordered_map<long long, vector<pair<int, int>>> sumMap;
    int result = 0;
    
    // Store all subarrays with their sums
    for (int start = 0; start < N; start++) {
        for (int end = start; end < N; end++) {
            long long sumValue = prefixSum[end + 1] - prefixSum[start];
            sumMap[sumValue].push_back({start, end});
        }
    }
    
    // Count valid pairs
    for (auto &entry : sumMap) {
        vector<pair<int, int>> &subarrays = entry.second;
        int sz = subarrays.size();
        
        for (int i = 0; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                if (subarrays[i].second < subarrays[j].first || subarrays[j].second < subarrays[i].first) {
                    result++;
                }
            }
        }
    }
    
    cout << result << endl;
    return 0;
}
