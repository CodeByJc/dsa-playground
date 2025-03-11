#include <iostream>
#include <vector>
using namespace std;

int countLuckyPairs(int P, int N, int M, vector<int>& stones) {
    vector<int> luckyStones;

    // Collect stones that are divisible by N or M
    for (int num : stones) {
        if (num % N == 0 || num % M == 0) {
            luckyStones.push_back(num);
        }
    }

    int size = luckyStones.size();
    
    // If less than 2 lucky stones, no valid pairs
    if (size < 2) return 0;

    // Use combination formula (nC2 = n * (n-1) / 2)
    return (size * (size - 1)) / 2;
}

int main() {
    int P, N, M;
    cin >> P >> N >> M;
    vector<int> stones(P);

    for (int i = 0; i < P; i++) {
        cin >> stones[i];
    }

    cout << countLuckyPairs(P, N, M, stones) << endl;
    return 0;
}
