#include <iostream>
using namespace std;

int howManyGames(int p, int d, int m, int s) {
    int games = 0;
    int cost = p;

    while (s >= cost) {
        s -= cost;     // buy the game
        games++;       // count it
        cost = max(cost - d, m); // next game price, not below m
    }

    return games;
}

int main() {
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    cout << howManyGames(p, d, m, s);
    return 0;
}
