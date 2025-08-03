#include <iostream>
using namespace std;

// Pattern 1: Solid square of '*'
void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 2: Right-angled triangle of '*'
void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 3: Increasing numbers in each row
void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

// Pattern 4: Same number repeated in each row
void pattern4(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num;
        }
        num++;
        cout << endl;
    }
}

// Pattern 5: Inverted right-angled triangle of '*'
void pattern5(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 6: Inverted right-angled triangle of numbers
void pattern6(int n) {
    for (int i = n; i > 0; i--) {
        int num = 1;
        for (int j = 0; j < i; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

// Pattern 7: Pyramid of '*'
void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int space = 0; space < n - i - 1; space++) cout << " ";
        // Stars
        for (int star = 0; star < 2 * i + 1; star++) cout << "*";
        // Spaces (optional, for symmetry)
        for (int space = 0; space < n - i - 1; space++) cout << " ";
        cout << endl;
    }
}

// Pattern 8: Inverted pyramid of '*'
void pattern8(int n) {
    for (int i = n; i > 0; i--) {
        // Spaces
        for (int space = 0; space < n - i; space++) cout << " ";
        // Stars
        for (int star = 0; star < 2 * i - 1; star++) cout << "*";
        // Spaces (optional, for symmetry)
        for (int space = 0; space < n - i; space++) cout << " ";
        cout << endl;
    }
}

// Pattern 9: Diamond (Pattern 7 + Pattern 8)
void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

// Pattern 10: Hourglass pattern of '*'
void pattern10(int n) {
    for (int i = 0; i < (n * 2) - 1; i++) {
        int star = (i < n) ? i + 1 : (2 * n - i - 1);
        for (int j = 0; j < star; j++) cout << "*";
        cout << endl;
    }
}

// Pattern 11: Binary triangle
void pattern11(int n) {
    for (int i = 0; i < n; i++) {
        int start = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

// Pattern 14: Increasing characters starting from 'A'
void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        char a = 'A';
        for (int j = 0; j <= i; j++) {
            cout << a;
            a++;
        }
        cout << endl;
    }
}

// Pattern 15: Inverted triangle of characters
void pattern15(int n) {
    for (int i = n; i > 0; i--) {
        char a = 'A';
        for (int j = 0; j < i; j++) {
            cout << a;
            a++;
        }
        cout << endl;
    }
}

// Pattern 16: Repeated characters per row
void pattern16(int n) {
    char a = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << a;
        a++;
        cout << endl;
    }
}

// Pattern 18: Character triangle decreasing alphabet
void pattern18(int n) {
    char a = 'E';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a;
            if (j < i) a++;
        }
        a -= (i + 1);
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern18(n);

    return 0;
}
