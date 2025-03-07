#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    char column = s[0]; // Extract column (a-h)
    int row = s[1] - '0'; // Extract row (1-8)
    
    // Convert column character to number (a -> 1, b -> 2, ..., h -> 8)
    int colNum = column - 'a' + 1;
    
    // If the sum of colNum and row is even, it's Black, otherwise it's White
    if ((colNum + row) % 2 == 0) {
        cout << "Black" << endl;
    } else {
        cout << "White" << endl;
    }
    
    return 0;
}
